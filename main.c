#include <stdio.h>

struct outputObj {
  float hour;
  float acntQty;
  float RegQty;
};

int main(void) {
  int caseLength;
  FILE *fp;
  // -----> just change input file name for bigdata
  // -----> make sure you change output filename in last of program from where you gonna see
  fp = fopen("inputSmallData.txt", "r");
  if (fp == NULL) {
    printf("Might be your file name wrong!");
  }
  fscanf(fp, "%d", &caseLength);

  printf("total length test cases %d\n\n", caseLength);

  char ch;
  int nLength;
  // initially fetch in first house N1
  fscanf(fp, "%d", &nLength);

  int r; // roof bedroom
  int s; // standard rooms
  int h; // victorial house

  struct outputObj finalOtptArr[caseLength];
  int indexFnlArr = 0;

  int ttlWalls;
  float accntTime = 0;
  float regTime = 0;

  while ((ch = getc(fp)) != EOF) {

    int i = 0;
    // Set 0 initially to accentQty and RegQty
    finalOtptArr[indexFnlArr].hour = 0;
    finalOtptArr[indexFnlArr].acntQty = 0;
    finalOtptArr[indexFnlArr].RegQty = 0;

    while (i < nLength) {
      // %*d is used to skip that position char
      // and after each identifier ',' is neccessary because it same as in
      // input.txt format of values of rows.
      fscanf(fp, "%*d, %d, %d, %d", &r, &s, &h);

      // ------ For each house Calculation:
      // printf("\n%d %d %d\n", r, s, h);

      // Total No. of walls
      ttlWalls = (r * 3) + (s * 4) + (h * 6);

      // --- Accent Qty:
      finalOtptArr[indexFnlArr].acntQty += ((float)((ttlWalls * 1) / 3) * 1.5);
      // --- Regular Qty:
      finalOtptArr[indexFnlArr].RegQty += ((float)(ttlWalls * 2) / 3) * 2.25;

      // --- Accent Time
      accntTime = ((float)(((float)(ttlWalls * 1) / 3) * 1.5) * 2.5) / 1.5;
      // --- Regular Time:
      regTime = ((float)(((float)(ttlWalls * 2) / 3) * 2.25) * 3.25) / 2.25;

      // Total Hour:
      finalOtptArr[indexFnlArr].hour += ((float)accntTime + regTime);

      i++;
    }
    // this will increment after above while loop;
    indexFnlArr++;

    // update nLength;
    fscanf(fp, "%d", &nLength);
  }

  printf("\n\n----- Final OutPut: \n\n");
  for (int i = 0; i < caseLength; i++) {
    printf("%.2f %.2f %.2f\n", finalOtptArr[i].hour, finalOtptArr[i].acntQty,
           finalOtptArr[i].RegQty);
  }

  // another file pointer for writing output
  FILE *fwrite;
  fwrite = fopen("outputSmallData.txt", "w");

  printf("\n");
  for (int i = 0; i < caseLength; i++) {
    fprintf(fwrite, "case #%d %.2f %.2f %.2f\n", i, finalOtptArr[i].hour,
            finalOtptArr[i].acntQty, finalOtptArr[i].RegQty);
  }

  return 0;
}