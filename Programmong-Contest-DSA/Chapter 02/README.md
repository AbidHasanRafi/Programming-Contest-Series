# Chapter 02 - C ঝালাই
- [simple code](code_02_01_simple_code.cpp)
- [simple input](code_02_02_simple_input.cpp)
- [circle area](code_02_03_circle_area.cpp)
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