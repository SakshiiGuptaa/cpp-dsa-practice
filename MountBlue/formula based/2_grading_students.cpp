#include <bits/stdc++.h>
using namespace std;
/*
Sample Input 0

4
73
67
38
33
Sample Output 0

75
67
40
33

Explanation 0
- For the first grade, 73, the next multiple of 5 is 75. Since 75 - 73 < 3, round up to 75.
- For the second grade, 67, the next multiple of 5 is 70. since 70 - 67 = 3, do not round up and keep the grade as 67.
- For the third grade, 38, the next multiple of 5 is 40. Since 40 - 38 < 3, round up to 40.
- For the fourth grade, 33, If the value of grade is less than 38, no rounding occurs as the result will still be a failing grade.
*/
vector<int> gradingStudents(vector<int> grades) {
    
    int n = grades.size();
    vector<int> finalMarks;
    for(int i=0 ; i<n ; i++){
        if(grades[i]>=38 && (grades[i]%5 !=0)){
           int gradesR = (grades[i]/5)*5 + 5;
            if(gradesR-grades[i]<3){
                finalMarks.push_back(gradesR);
            }
            else{
                finalMarks.push_back(grades[i]);
            }
        }
        else{
            finalMarks.push_back(grades[i]);
        }
    }
    return finalMarks;
}