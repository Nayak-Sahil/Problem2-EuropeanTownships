# Problem 2: European Township
Algorithm to calculate the number of hours it would take to paint each township along with the quantity required to paint all “accent” and “regular” walls, rounded off to two decimal places.

### Some Important thing that you need to make sure while running this repositories file:
1. Consider *main.c* file to execute program
2. Make sure that, To execute smallInputData file you will first change name as **inputSmallData.txt** in main.c program file in follwing line
```c 
    FILE *fp;
    fp = fopen("inputBigData.txt", "r");
``` 
3. Make sure that, To generate Output file you will first change name as **outputSmallData.txt** or **outputBigData.txt** based on inputFile in main.c program file in follwing line
```c 
  FILE *fwrite;
  fwrite = fopen("outputBigData.txt", "w");
```
4. And Please, Consider My Program Approch before you consider.

### Problem Statements:
You have been given the contract to paint all houses in all his townships by a European Contractor. Each township was houses of different sizes.

**This has been your biggest-ever contract, so you ask the following questions for which you have been answered:**
1. Each house has a Victorian-style hall which has 6 walls.
2. Bedrooms on the roof will only have 3 walls.
3. Each house has a standard kitchen.
4. All other rooms are standard rooms with 4 walls.

**Each page listed has the following content with a maximum size that needs to be served:**
1. Text content piece - 5 MB each
2. Images - Total of 20 MB. Each image is of equal size totalling 20 MB.
3. Forms - Total of 5 MB. Each form is of equal size.

**For painting a house, the contractor has some specific requirements for all rooms:**

- She wants to paint ⅓ of the room walls with an accent colour and ⅔ of the room walls with normal colour.
- The accent colour required to paint each wall is **1.5 litres** and it takes **2.5 hours** to paint the wall.
- The regular colour required to paint a wall is **2.25 litres** and it takes **3.25 hours** to paint the wall.
- You have to write an algorithm to calculate the number of hours it would take to paint each township along with the quantity required to paint all “accent” and “regular” walls, rounded off to two decimal places.

**Input:**

T = **Townships** <br>
N = **houses**  <br>
H = **Victorian style halls** <br>
S = **Standard rooms** <br>
R = **Roof bed rooms** <br>
T <br>
N <br>
Total bedrooms, R , S , H <br>


**Output:**
Case #: total hours, accent qty, regular qty

**Limits:**

1 < T < 30 <br>
50 < N < 150 **(small)** <br>
175 < N < 500 **(large)** <br>
1 < Total bedrooms < 13 **(small)** <br>
1 < Total bedrooms < 100 **(large)** <br>

**Thanks in advance! if anything you will find wrong in this repository please let me know.**
