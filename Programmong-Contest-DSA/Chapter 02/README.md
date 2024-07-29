# Chapter 02 - C ঝালাই
- [simple code](code_02_01_simple_code.cpp)
- [simple input](code_02_02_simple_input.cpp)
- [circle area](code_02_03_circle_area.cpp)
- [simple if](code_02_04_simple_if.cpp)
- [odd even](code_02_05_odd_even.cpp)
- [leap year](code_02_06_leap_year.cpp)
- [leap year2](code_02_07_leap_year2.cpp)
- [simple loop](code_02_08_simple_loop.cpp)
- [simple loop2](code_02_09_simple_loop2.cpp)
- [simple loop3](code_02_10_simple_loop3.cpp)
- [simple loop4](code_02_11_simple_loop4.cpp)
## অনুশীলনী
- [Timus 1000](#timus-1000)
- [Timus 1264](#timus-1264)
- [Timus 1293](#timus-1293)
- [Timus 1409](#timus-1409)
- [Exercise 05](#exercise-05)
- [Exercise 06](#exercise-06)
- [Exercise 07](#exercise-07)
- [Exercise 08](#exercise-08)
- [Exercise 09](#exercise-09)
- [Exercise 10](#exercise-10)
- [Exercise 11](#exercise-11)
- [Exercise 12](#exercise-12)
- [Exercise 13](#exercise-13)
- [Exercise 14](#exercise-14)
- [Timus 1068](#timus-1068)
- [Exercise 16](#exercise-16)
- [Exercise 17](#exercise-17)
- [Exercise 18](#exercise-18)
- [Exercise 19](#exercise-19)
- [Exercise 20](#exercise-20)
- [Exercise 21](#exercise-21)
- [Exercise 22](#exercise-22)
### Timus 1000
<div style="text-align: center; margin-bottom: 20px;">
    <h3>A+B Problem</h3>
    <p><strong>Time limit:</strong> 1.0 second</p>
    <p><strong>Memory limit:</strong> 64 MB</p>
</div>

<div>
    <p><strong>Problem:</strong> Calculate (a + b)</p>
    <h4>Input</h4>
    <p>Two integers, <code>a</code> and <code>b</code></p>
    <h4>Output</h4>
    <p>The sum of <code>a</code> and <code>b</code></p>
    <h4>Sample</h4>
    <table style="width: 100%; border-collapse: collapse; margin: 0 auto;">
        <tr>
            <th style="border: 1px solid gray; padding: 8px; text-align: center;">Input</th>
            <th style="border: 1px solid gray; padding: 8px; text-align: center;">Output</th>
        </tr>
        <tr>
            <td style="border: 1px solid gray; padding: 8px;">1 5</td>
            <td style="border: 1px solid gray; padding: 8px;">6</td>
        </tr>
    </table>
</div>
<br>

[Solution](Exercises/ex_02_01_timus_1000.cpp)

---

### Timus 1264
<div style="text-align: center; margin-bottom: 20px;">
    <h3>Workdays</h3>
    <p><strong>Time limit:</strong> 1.0 second</p>
    <p><strong>Memory limit:</strong> 64 MB</p>
</div>

<div>
    <p>After a success of the previous Vasechkin’s program that allowed to calculate the results of the elections in cause of two days Artemy Sidorovich was placed at the head of the department. At the moment Artemy Sidorovich prepares a task for his subordinate — programmer Petechkin. The task is to write a very useful function that would ease the life of all the department programmers. For each integer from 0 to M the function would calculate how many times this number appears in the N-element array. Artemy Sidorovich deems that the function should work as follows (the sample code for N = 3, M = 1):</p>
    <table style="width: 100%; border-collapse: collapse; margin: 0 auto;">
        <tr>
            <th style="border: 1px solid gray; padding: 8px; text-align: center;">C</th>
            <th style="border: 1px solid gray; padding: 8px; text-align: center;">Pascal</th>
        </tr>
        <tr>
            <td style="border: 1px solid gray; padding: 8px;">
                <p>if (arr[0]==0) ++count[0];</p>
                <p>if (arr[0]==1) ++count[1];</p>
                <p>if (arr[1]==0) ++count[0];</p>
                <p>if (arr[1]==1) ++count[1];</p>
                <p>if (arr[2]==0) ++count[0];</p>
                <p>if (arr[2]==1) ++count[1];</p>
            </td>
            <td style="border: 1px solid gray; padding: 8px;">
                <p>if arr[0]=0 then count[0] := count[0] + 1;</p>
                <p>if arr[0]=1 then count[1] := count[1] + 1;</p>
                <p>if arr[1]=0 then count[0] := count[0] + 1;</p>
                <p>if arr[1]=1 then count[1] := count[1] + 1;</p>
                <p>if arr[2]=0 then count[0] := count[0] + 1;</p>
                <p>if arr[2]=1 then count[1] := count[1] + 1;</p>
            </td>
        </tr>
    </table>
    <p>Artemy Sidorovich wants to estimate the time that Petechkin will need to execute the task. We know that Petechkin needs one second to write a line of the code (he’s fast, isn’t he?). Artemy Sidorovich doesn’t know exactly bounds for M and N. Your task is to write program that would calculate a number of seconds that Petechkin will write the code.</p>
    <h4>Input</h4>
    <p>The only line contains integers <code>N (0 ≤ N ≤ 40000)</code> and <code>M (0 ≤ M ≤ 40000)</code>.</p>
    <h4>Output</h4>
    <p>Output an amount of seconds that Petechkin needs to write the program.</p>
    <h4>Sample</h4>
    <table style="width: 100%; border-collapse: collapse; margin: 0 auto;">
        <tr>
            <th style="border: 1px solid gray; padding: 8px; text-align: center;">Input</th>
            <th style="border: 1px solid gray; padding: 8px; text-align: center;">Output</th>
        </tr>
        <tr>
            <td style="border: 1px solid gray; padding: 8px;">3 1</td>
            <td style="border: 1px solid gray; padding: 8px;">6</td>
        </tr>
    </table>
</div>
<br>

[Solution](Exercises/ex_02_02_timus_1264.cpp)

---

### Timus 1293
<div style="text-align: center; margin-bottom: 20px;">
    <h3>Workdays</h3>
    <p><strong>Time limit:</strong> 1.0 second</p>
    <p><strong>Memory limit:</strong> 64 MB</p>
</div>

<div>
    <p>It’s restless now on the slips of the intergalactic port’s sixth dock of planet of Torn. No longer then in a month the reconstruction of the small ironclad corvette “Eniya” will be finished. And again this battle ship and its brave team would have to struggle for the control over plutonium mines of Sibelius. The work cannot be stopped even for a second, self-powered laser welders work round the clock. Joints of robots-repairers fuse because of this permanent work. Nevertheless, they can’t stop not for a single moment.</p>
    <p>Now in all this turmoil it is discovered that corvette’s thermopanels again need an urgent processing with thorium sulphide. It is known that the processing of the one square meter of the panel needs 1 nanogramm of sulphide. In general, it is needed to process N rectangular panels, which dimensions are A by B meters. It is necessary to calculate as fast as possible, how much sulphide is needed in general for the processing of all panels of “Eniya”. Moreover, do not forget, that the panels need processing of both sides.</p>
    <h4>Input</h4>
    <p>The only line contains integers <code>N (1 ≤ N ≤ 100)</code>, <code>A (1 ≤ A ≤ 100)</code>, <code>B (1 ≤ B ≤ 100)</code>.</p>
    <h4>Output</h4>
    <p>Output the weight of thorium sulphide in nanogramms needed for the processing.</p>
    <h4>Sample</h4>
    <table style="width: 100%; border-collapse: collapse; margin: 0 auto;">
        <tr>
            <th style="border: 1px solid gray; padding: 8px; text-align: center;">Input</th>
            <th style="border: 1px solid gray; padding: 8px; text-align: center;">Output</th>
        </tr>
        <tr>
            <td style="border: 1px solid gray; padding: 8px;">5 2 3</td>
            <td style="border: 1px solid gray; padding: 8px;">60</td>
        </tr>
    </table>
</div>
<br>

[Solution](Exercises/ex_02_03_timus_1293.cpp)

---

### Timus 1409
<div style="text-align: center; margin-bottom: 20px;">
    <h3>Two Gangsters</h3>
    <p><strong>Time limit:</strong> 1.0 second</p>
    <p><strong>Memory limit:</strong> 64 MB</p>
</div>

<div>
    <p>Two gangsters Harry and Larry had a rest at countryside. They decided to spend some time shooting, so they put several beer cans (no more than 10) on a log. Harry started to shoot cans one after another from the leftmost to the right and Larry – from the rightmost to the left. At some moment it happened so that they shot one and the same can.</p>
    <p>Harry got indignant and claimed that Larry owed him a considerable sum of money because Larry deprived him of shooting some more cans. Larry became furious and told Harry that he owed even greater sum of money to Larry because of the same reason. They started to argufy but nobody remembered how many cans there were at the very beginning. And no one of them was going to search cans which was shot. Anyway, each of them remembered exactly how many cans he shot.</p>
    <p>Determine how many cans were not shot by Harry and how many cans were not shot by Larry.</p>
    <h4>Input</h4>
    <p>The only input line contains two integers — the number of cans shot by Harry and by Larry respectively.</p>
    <h4>Output</h4>
    <p>two integers — the number of cans that were not shot by Harry and the number of cans that were not shot by Larry, respectively.</p>
    <h4>Sample</h4>
    <table style="width: 100%; border-collapse: collapse; margin: 0 auto;">
        <tr>
            <th style="border: 1px solid gray; padding: 8px; text-align: center;">Input</th>
            <th style="border: 1px solid gray; padding: 8px; text-align: center;">Output</th>
        </tr>
        <tr>
            <td style="border: 1px solid gray; padding: 8px;">4 7</td>
            <td style="border: 1px solid gray; padding: 8px;">6 3</td>
        </tr>
    </table>
</div>
<br>

[Solution](Exercises/ex_02_04_timus_1409.cpp)

---

### Exercise 05
<div style="margin-bottom: 20px;">
    <h5>দুটি দ্বিমাত্রিক (2D) বিন্দুর স্থানাঙ্ক (co-ordinate) ইনপুট নিয়ে তাদের মাঝের দূরত্ব প্রিন্ট কর।</h5>
</div>

- **Input**: The program prompts the user to enter the coordinates of two points, `(x1, y1)` and `(x2, y2)`.
- **Calculation**: It calculates the Euclidean distance between these two points using the formula:

<h4 style="text-align: center;">
  <em>distance</em> = &radic;((<em>x</em><sub>2</sub> - <em>x</em><sub>1</sub>)<sup>2</sup> + (<em>y</em><sub>2</sub> - <em>y</em><sub>1</sub>)<sup>2</sup>)
</h4>

- **Output**: The program outputs the distance between the two points.

<br>

[Solution](Exercises/ex_02_05_exercise_05.cpp)

---

### Exercise 06
<div style="margin-bottom: 20px;">
    <h5>একটি ত্রিভূজের তিনটি বাহুর দৈর্ঘ্য দেওয়া আছে, তার তিনটি কোণ নির্ণয় কর।</h5>
</div>

- **Input**: The program prompts the user to enter the lengths of the three sides of a triangle, `a`, `b`, and `c`.
- **Calculation**: It calculates the angles of the triangle opposite to these sides using the law of cosines:

1. **Angle A** (opposite to side `a`):
   <h4 style="text-align: center;">
     <em>A</em> = cos<sup>-1</sup>[(<em>b</em><sup>2</sup> + <em>c</em><sup>2</sup> - <em>a</em><sup>2</sup>) / (2bc)]
   </h4>

2. **Angle B** (opposite to side `b`):
   <h4 style="text-align: center;">
     <em>B</em> = cos<sup>-1</sup>[(<em>a</em><sup>2</sup> + <em>c</em><sup>2</sup> - <em>b</em><sup>2</sup>) / (2ac)]
   </h4>

3. **Angle C** (opposite to side `c`):
   <h4 style="text-align: center;">
     <em>C</em> = cos<sup>-1</sup>[(<em>a</em><sup>2</sup> + <em>b</em><sup>2</sup> - <em>c</em><sup>2</sup>) / (2ab)]
   </h4>

- **Output**: The program outputs the angles `A`, `B`, and `C` of the triangle in degrees.

<br>

[Solution](Exercises/ex_02_06_exercise_06.cpp)

---

### Exercise 07
<div style="margin-bottom: 20px;">
    <h5>একটি ত্রিভূজের তিনটি বাহুর দৈর্ঘ্য দেওয়া আছে, তার ক্ষেত্রফল নির্ণয় কর।</h5>
</div>

- **Input**: The program prompts the user to enter the lengths of the three sides of a triangle, `a`, `b`, and `c`.
- **Calculation**: It computes the semi-perimeter `s` and uses Heron's formula to compute the area of the triangle:

1. **The Semi-Perimeter** (`s`):
   <h4 style="text-align: center;">
     <em>s</em> = <span>(a+b+c)/2</span>
   </h4>

2. **The Area** (`A`):
   <h4 style="text-align: center;">
     <em>A</em> = <span>&radic;<em>s</em> ⋅ (<em>s</em> − <em>a</em>) ⋅ (<em>s</em> − <em>b</em>) ⋅ (<em>s</em> − <em>c</em>)</span>
   </h4>

- **Output**: The program outputs the the area of the triangle in degrees.

<br>

[Solution](Exercises/ex_02_07_exercise_07.cpp)

---

### Exercise 08
<div style="margin-bottom: 20px;">
    <h5>একটি বৃত্তের ব্যাসার্ধ দেওয়া আছে, পরিসীমা নির্ণয় কর।</h5>
</div>

- **Input**: The program prompts the user to enter the radius of the circle.
- **Calculation**: It uses the formula `2πr` to calculate the perimeter. `M_PI` is a constant in math.h representing the value of `𝜋`:

   <h4 style="text-align: center;">
     <em>Perimeter</em> = <span>2πr</span>
   </h4>

- **Output**: The program prints the calculated perimeter to two decimal places.

<br>

[Solution](Exercises/ex_02_08_exercise_08.cpp)

---

### Exercise 09
<div style="margin-bottom: 20px;">
    <h5>কোনো একটি সংখ্যার বর্গমূলের কাছের পূর্ণসংখ্যাটি প্রিন্ট কর।</h5>
</div>

- **Input**: The program prompts the user to enter the number.
- **Calculation**: It uses the `sqrt()` function from math.h header file to calculate the square-root. Then determines the nearest integer using the `round()` function from algorithm header file.
- **Output**: The program prints the the nearest integer.

<br>

[Solution](Exercises/ex_02_09_exercise_09.cpp)

---

### Exercise 10
<div style="margin-bottom: 20px;">
    <h5>একটি ত্রিভূজের শীর্ষবিন্দুগুলোর স্থানাঙ্ক দেওয়া আছে, ক্ষেত্রফল প্রিন্ট কর।</h5>
</div>

- **Input**: The program prompts the user to enter the coordinates of the three vertices of the triangle.
- **Calculation**: It uses the formula for the area of a triangle based on vertex coordinates:

   <h4 style="text-align: center;">
     <em>Area</em> = <span>0.5 * | x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2) |</span>
   </h4>

- **Output**: The program prints the calculated area to two decimal places.

<br>

[Solution](Exercises/ex_02_10_exercise_10.cpp)

---

### Exercise 11
<div style="margin-bottom: 20px;">
    <h5>প্যালিনড্রম (palindrome) হলো সেই জিনিস যা সামনে থেকে পড়তেও যা, পেছন থেকে পড়তেও তা। যেমন কিছু প্যালিনড্রম সংখ্যা হলোঃ 1, 2, 3, ...9, 11, 22, 33, ...99, 101, 111, 121, .... তোমাকে n তম প্যালিনড্রম সংখ্যা প্রিন্ট করতে হবে। (n < 100) </h5>
</div>

- **Input**: The program prompts the user to input a number `n` which should be between 1 and 99.
- **Calculation**: `while (count < n)`: Loop until the nth palindrome is found:
    - **Reverse the Number**:
        - Use a `while` loop to reverse the digits of `current`.
        - `remainder = num % 10`: Get the last digit.
        - `reversed = reversed * 10 + remainder`: Construct the reversed number.
        - `num /= 10`: Remove the last digit.
    - **Check if the Number is a Palindrome**:
        - Compare the reversed number with the original number.
        - If they are equal, increment the `count`.

- **Output**: When the count reaches `n`, print the `n`th palindrome number and exit the loop.

<br>

[Solution](Exercises/ex_02_11_exercise_11.cpp)

---

### Exercise 12
<div style="margin-bottom: 20px;">
    <h5>n এর মান দেওয়া আছে, তোমাকে <strong>Σ i * (n - i + 1) = i * n + 2 * (n - 1) + ... + n * 1</strong> এর মান বের করতে হবে। (এটা কিন্তু else-if এর প্র্যাক্সটিস প্রবলেম)</h5>
</div>

- **Input**: The program prompts the user to input an integer number `n`.
- **Calculation**: The program checks if n is greater than 0. If not, it asks the user to enter a positive integer. The summation can be expressed as:

    $$
    \sum_{i=1}^{n} i \cdot (n - i + 1) = i \cdot n + 2 \cdot (n - 1) + \ldots + n \cdot 1
    $$

    - A `for` loop iterates from `i = 1` to `i = n`.
    - For each value of `i`, the term `i * (n - i + 1)` is computed and added to the `sum`.

- **Output**: After computing the sum, the result is printed.

<br>

[Solution](Exercises/ex_02_12_exercise_12.cpp)

---

### Exercise 13
<div style="margin-bottom: 20px;">
    <h5>দুটি সংখ্যার মধ্যে কোনটি বড় প্রিন্ট কর। এর পরে তিনটি সংখ্যার জন্যও চেষ্টা করে দেখ।</h5>
</div>

- **Input**: The program prompts the user to input an integer numbers.
- **Calculation**: The program checks using `if-else` statements determine which number is greater or if they are equal.
- **Output**: After computing the greater integer number, the result is printed.

<br>

[Solution](Exercises/ex_02_13_exercise_13.cpp)

---

### Exercise 14
<div style="margin-bottom: 20px;">
    <h5>একটি স্থানাংক দেওয়া আছে, তোমাকে বলতে হবে সেটা কোন quadrant এ পরে।</h5>
</div>

- **Input**: The user inputs the coordinates `x` and `y`.
- **Calculation**: Quadrant, Axis and Origin Determination:
   - **Quadrant I**: Both `x` and `y` are positive.
   - **Quadrant II**: `x` is negative and `y` is positive.
   - **Quadrant III**: Both `x` and `y` are negative.
   - **Quadrant IV**: `x` is positive and `y` is negative.
   - **Y-axis**: `x` is 0 and `y` is not 0.
   - **X-axis**: `y` is 0 and `x` is not 0.
   - **Origin**: Both `x` and `y` are 0.

- **Output**: After identifying the location of the point based on its coordinates, the result is printed.

<br>

[Solution](Exercises/ex_02_14_exercise_14.cpp)

---

### Timus 1068
<div style="text-align: center; margin-bottom: 20px;">
    <h3>Sum</h3>
    <p><strong>Time limit:</strong> 2.0 second</p>
    <p><strong>Memory limit:</strong> 64 MB</p>
</div>

<div>
    <p>Your task is to find the sum of all integer numbers lying between 1 and N inclusive.</p>
    <h4>Input</h4>
    <p>The input consists of a single integer N that is not greater than 10000 by it's absolute value.</p>
    <h4>Output</h4>
    <p>Write a single integer number that is the sum of all integer numbers lying between 1 and N inclusive.</p>
    <h4>Sample</h4>
    <table style="width: 100%; border-collapse: collapse; margin: 0 auto;">
        <tr>
            <th style="border: 1px solid gray; padding: 8px; text-align: center;">Input</th>
            <th style="border: 1px solid gray; padding: 8px; text-align: center;">Output</th>
        </tr>
        <tr>
            <td style="border: 1px solid gray; padding: 8px;">-3</td>
            <td style="border: 1px solid gray; padding: 8px;">-5</td>
        </tr>
    </table>
</div>
<br>

[Solution](Exercises/ex_02_15_timus_1068.cpp)

---

### Exercise 16
<div style="margin-bottom: 20px;">
    <h5>নিচের সিরিজগুলো কোড লিখে সমাধান করঃ</h5>
    <ol>
        <strong><li> 1 + 2 + 3 + .... + n </li></strong>
        <strong><li> 1<sup>2</sup> + 2<sup>2</sup> + 3<sup>2</sup> + ... + n<sup>2</sup> </li></strong>
        <strong><li> 1<sup>3</sup> + 2<sup>3</sup> + 3<sup>3</sup> + ... + n<sup>3</sup> </li></strong>
        <strong><li> 1 + (2 +3) + (4 + 5 + 6) + ... + nth term </li></strong>
        <strong><li> 1 - 2 + 3 - 4 + 5 ... nth term </li></strong>
        <strong><li> 1 + (2 + 3 * 4) + (5 + 6*7 + 8*9*10) + ... + nth term </li></strong>
        <strong><li> 1*n + 2*(n - 1) + ... + n*1 </li></strong>
    </ol>
</div>

- **Input**: The program prompts the user to input a number `n`.
- **Calculation**:
    1. **Sum of Natural Numbers**: Uses the formula `n * (n + 1) / 2`
    2. **Sum of Squares**: Uses the formula `n * (n + 1) * (2 * n + 1) / 6`
    3. **Sum of Cubes**: Is calculated as the square of the sum of natural numbers.
    4. **Sum of Series**: Calculates the sum of series `1 + (2 + 3) + (4 + 5 + 6) + ...`
    5. **Alternating Sum**: Computes `1 - 2 + 3 - 4 + ...`
    6. **Complex Series**: Adds products of increasing sequences
    7. **Weighted Sum**: Calculates `1*n + 2*(n-1) + ... + n*1`

- **Output**: The program prints the series.

<br>

[Solution](Exercises/ex_02_16_exercise_16.cpp)

---

### Exercise 17
<div style="margin-bottom: 20px;">
    <h5>n ইনপুটের জন্য পিরামিডগুলো প্রিন্ট করঃ</h5>
    <ol>
    <li>
        <p><strong>Pattern 1:</strong></p>
        <pre>
*
**
***
        </pre>
    </li>
    <li>
        <p><strong>Pattern 2:</strong></p>
        <pre>
***
 **
  *
        </pre>
    </li>
    <li>
        <p><strong>Pattern 3:</strong></p>
        <pre>
  *
 ***
*****
        </pre>
    </li>
    <li>
        <p><strong>Pattern 4:</strong></p>
        <pre>
12321
 121 
  1
        </pre>
    </li>
    <li>
        <p><strong>Pattern 5:</strong></p>
        <pre>
  *
 ***
*****
 ***
  *
        </pre>
    </li>
    <li>
        <p><strong>Pattern 6:</strong></p>
        <pre>
  1  
 121 
12321
 121 
  1
        </pre>
    </li>
</ol>

</div>

- **Input**: The program prompts the user to input a number `n`.
- **Calculation**:
    1. **Pattern 1: Right-angled Triangle**
        - Iterates from `1` to `n`, printing `i` stars for each line.

    2. **Pattern 2: Inverted Right-angled Triangle (aligned to the right)**
        - **Leading Spaces**: Print `n - i` spaces before the stars to align them to the right.
        - **Stars**: Print `i` stars for each row, where `i` decreases from `n` to `1`.

    3. **Pattern 3: Centered Pyramid**
        - Prints spaces followed by stars to form a centered pyramid, where the number of stars increases and the number of spaces decreases.

    4. **Pattern 4 (Inverted Centered Pyramid)**:
        - Print leading spaces to center the numbers.
        - Print numbers incrementally from `1` to `i` and then decrement back to `1`.

    5. **Pattern 5: Diamond Shape**
        - First prints the upper pyramid part, then prints the lower inverted pyramid part to form a diamond shape.

    6. **Pattern 6 (Diamond Shaped with Numbers)**:
        - Print numbers in a diamond shape. For each row, print numbers incrementally up to `i`, then decrement back down, with appropriate leading spaces.

- **Output**: The program prints the patterns.

<br>

[Solution](Exercises/ex_02_17_exercise_17.cpp)

---

### Exercise 18
<div style="margin-bottom: 20px;">
    <h5>প্যালিনড্রম (palindrome) হলো সেই জিনিস যা সামনে থেকে পড়তেও যা, পেছন থেকে পড়তেও তা। যেমন কিছু প্যালিনড্রম সংখ্যা হলোঃ 1, 2, 3, ...9, 11, 22, 33, ...99, 101, 111, 121, .... তোমাকে n তম প্যালিনড্রম সংখ্যা প্রিন্ট করতে হবে। (n < 10<sup>9</sup>) </h5>
</div>

- **Input**: The program prompts the user to input a number `n` which should be between 1 and 10<sup>9</sup>.
- **Calculation**: `while (count < n)`: Loop until the nth palindrome is found:
    - **Reverse the Number**:
        - Use a `while` loop to reverse the digits of `current`.
        - `remainder = num % 10`: Get the last digit of `num`.
        - `reversed = reversed * 10 + remainder`: Construct the reversed number by appending the last digit.
        - `num /= 10`: Remove the last digit from `num`.
    - **Check if the Number is a Palindrome**:
        - Compare the reversed number (`reversed`) with the original number (`original`).
        - If they are equal, it means `current` is a palindrome.
        - Increment the `count` of palindromes found.
        - If `count` reaches `n`, print the nth palindrome and exit the loop.

- **Output**: When the count reaches `n`, print the `n`th palindrome number and exit the loop.

<br>

[Solution](Exercises/ex_02_18_exercise_18.cpp)

---

### Exercise 19
<div style="margin-bottom: 20px;">
    <h5>কোনো একটি সংখ্যা n মৌলিক (prime) হবে যদি সেটি 1 থেকে বড় হয় এবং 1 বা n ছাড়া আর কোনো ধনাত্মক সংখ্যা দিয়ে বিভাজ্য না হয়। তোমাকে n দেওয়া আছে বলতে হবে এটি মৌলিক কি মৌলিক নয়।</h5>
</div>

- **Input**: The program prompts the user to input a number `n`.
- **Calculation**:
<ul>
    <li>
        <p>Special Case Handling</p>
        <ul>
            <li>If <i>n</i> is less than or equal to 1, it is not considered a prime number.</li>
        </ul>
    </li>
    <li>
        <p>Prime Checking</p>
        <ul>
            <li>For numbers greater than 1:</li>
            <ul>
                <li>Iterate from 2 up to <i>&#8730;n</i> (square root of <i>n</i>).</li>
                <li>If <i>n</i> is divisible by any number in this range, then <i>n</i> is not a prime number.</li>
            </ul>
        </ul>
    </li>
</ul>


- **Output**: Based on the result, print whether the number is prime or not.

<br>

[Solution](Exercises/ex_02_19_exercise_19.cpp)

---

### Exercise 20
<div style="margin-bottom: 20px;">
    <h5>n! (n ফ্যাক্টোরিয়াল) নির্ণয় কর।</h5>
</div>

- **Input**: The program prompts the user to input a number `n`.
- **Calculation**:
 - Negative Input Check
    - The program checks if the input is negative.
    - If the input is negative, it prints an error message.

 - Calculate Factorial
    - A `for` loop iterates from 1 to \( n \).
    - During each iteration, the `factorial` variable is multiplied by the current loop index.

- **Output**: Based on the result, the output is printed.

<br>

[Solution](Exercises/ex_02_20_exercise_20.cpp)

---

### Exercise 21
<div style="margin-bottom: 20px;">
    <h5>
    n ও r দেওয়া আছে, তোমাকে <sup>n</sup>C<sub>r</sub> =
    <span style="display: inline-block; vertical-align: middle;">n!</span>
    <span style="display: inline-block; vertical-align: middle;"> / </span>
    <span style="display: inline-block; vertical-align: middle;">r! &middot; (n - r)!</span> প্রিন্ট করতে হবে।
</h5>
</div>

- **Input**: The program prompts the user to input `n` and `r`.
- **Calculation**:
<ol>
    <li>Compute Factorials
        <ul>
            <li>The factorials of <i>n</i>, <i>r</i>, and <i>n - r</i> are computed.</li>
        </ul>
    </li>
    <li>Calculate <i>nCr</i>
        <ul>
            <li>The value of <i>nCr</i> is then calculated using the formula:</li>
        </ul>
        <p style="text-align: center;">
            <span style="display: inline-block; vertical-align: middle; border-top: 1px solid; width: 0;"></span>
            <span style="display: inline-block; vertical-align: middle; border-bottom: 1px solid; width: 0;"></span>
            <span style="display: inline-block; vertical-align: middle;">n!</span>
            <span style="display: inline-block; vertical-align: middle;"> / </span>
            <span style="display: inline-block; vertical-align: middle; border-top: 1px solid; width: 0;"></span>
            <span style="display: inline-block; vertical-align: middle; border-bottom: 1px solid; width: 0;"></span>
            <span style="display: inline-block; vertical-align: middle;">r! &middot; (n - r)!</span>
        </p>
    </li>
</ol>

- **Output**: Based on the result, the output is printed.

<br>

[Solution](Exercises/ex_02_21_exercise_21.cpp)

---

### Exercise 22
<div style="margin-bottom: 20px;">
    <h5>x ও n দেওয়া আছে, তোমাকে cos(x) এর মান ম্যাকলরিনের ধারা (maclaurine series) এর সাহায্যে বের করতে হবে। cos(x) এর ধারাটি হচ্ছে 1 - (x<sup>2</sup> / 2!) + (x<sup>4</sup> / 4!) + ... + nth term</h5>
</div>

- **Input**: The program prompts the user to input `x` and `n`.
- **Calculation**:
  - **Factorial Calculation**: Computes the factorial for each term in the series.
  - **Term Calculation**: Computes each term of the series using the formula (-1)<sup>i</sup> &middot; 
<span style="display: inline-block; vertical-align: middle; border-top: 1px solid; width: 0;"></span>
<span style="display: inline-block; vertical-align: middle; border-bottom: 1px solid; width: 0;"></span>
<span style="display: inline-block; vertical-align: middle;">x<sup>2i</sup></span> 
<span style="display: inline-block; vertical-align: middle;">/</span>
<span style="display: inline-block; vertical-align: middle; border-top: 1px solid; width: 0;"></span>
<span style="display: inline-block; vertical-align: middle; border-bottom: 1px solid; width: 0;"></span>
<span style="display: inline-block; vertical-align: middle;">(2i)!</span>.


- **Output**: Based on the result, the output is printed.

<br>

[Solution](Exercises/ex_02_22_exercise_22.cpp)

---