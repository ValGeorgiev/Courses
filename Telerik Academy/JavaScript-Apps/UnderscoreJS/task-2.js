/*
 Create a function that:
 *   Takes an array of students
 *   Each student has a `firstName`, `lastName` and `age` properties
 *   **finds** the students whose age is between 18 and 24
 *   **prints**  the fullname of found students, sorted lexicographically ascending
 *   fullname is the concatenation of `firstName`, ' ' (empty space) and `lastName`
 *   **Use underscore.js for all operations**
 */

var _ = require('underscore');

function finds(students){
    _.chain(students).filter(function(item){
        return item.age > 17 && item.age < 25;
    }).map(function(item){
        item.fullName = item.firstName + ' ' + item.lastName;
        return item;
    }).sortBy('fullName').map(function(item){
        console.log(item);
    });
}

function solve(){
    var students = [
        {firstName: 'Valentin', lastName: 'Georgiev', age: 11},
        {firstName: 'Krum', lastName: 'Emilov', age: 7},
        {firstName: 'Valentin', lastName: 'Petrov', age: 19},
        {firstName: 'Pesho', lastName: 'Valentinov', age: 21},
        {firstName: 'Martin', lastName: 'Iliev', age: 1},
        {firstName: 'Georgi', lastName: 'Georgiev', age: 15}
    ];
    finds(students);
}

solve();

module.exports = solve;