/*
 Create a function that:
 *   Takes an array of students
 *   Each student has:
 *   `firstName`, `lastName`, `age` and `marks` properties
 *   `marks` is an array of decimal numbers representing the marks
 *   **finds** the student with highest average mark (there will be only one)
 *   **prints** to the console  'FOUND_STUDENT_FULLNAME has an average score of MARK_OF_THE_STUDENT'
 *   fullname is the concatenation of `firstName`, ' ' (empty space) and `lastName`
 *   **Use underscore.js for all operations**
 */

var _ = require('underscore');

function averageMark(students){
    var student = _.chain(students).map(function(item){
        item.fullName = item.firstName + ' ' + item.lastName;
        var i = 0,
            sum = 0,
            len = item.marks.length;
        for(i = 0; i < item.marks.length; i += 1){
            sum += item.marks[i];
        }
        item.avgMark = sum / len;
        return item;
    }).sortBy('avgMark').last().value();
    console.log(student.fullName + ' has an average score of ' + student.avgMark);
}
function solve(){
    var students = [
        {firstName: 'Valentin', lastName: 'Georgiev', age: 11, marks: [4,2,6]},
        {firstName: 'Krum', lastName: 'Emilov', age: 7, marks: [5,2,5]},
        {firstName: 'Valentin', lastName: 'Petrov', age: 19, marks: [6,6,5]},
        {firstName: 'Pesho', lastName: 'Valentinov', age: 21, marks: [4,3,6]},
        {firstName: 'Martin', lastName: 'Iliev', age: 1, marks: [4,2,4]},
        {firstName: 'Georgi', lastName: 'Georgiev', age: 15, marks: [2,2,2]}
    ];
    averageMark(students);
}
solve();

module.exports = solve;