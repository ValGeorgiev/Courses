/*
 *   Create a function that:
 *   Takes an array of students
 *   Each student has a `firstName` and `lastName` properties
 *   **Finds** all students whose `firstName` is before their `lastName` alphabetically
 *   Then **sorts** them in descending order by fullname
 *   fullname is the concatenation of `firstName`, ' ' (empty space) and `lastName`
 *   Then **prints** the fullname of founded students to the console
 *   **Use underscore.js for all operations**
 */
var _ = require('underscore');

function sorting(students) {
    _.chain(students).filter(function(item){
        return item.firstName < item.lastName;
    }).map(function(item){
        item.fullName = item.firstName + ' ' + item.lastName;
        return item;
    }).sortBy('fullName').reverse()
        .each(function(item){
            console.log(item.fullName);
        });
}

function solve(){
    var students = [
        {firstName: 'Valentin', lastName: 'Georgiev'},
        {firstName: 'Krum', lastName: 'Emilov'},
        {firstName: 'Pesho', lastName: 'Valentinov'},
        {firstName: 'Valentin', lastName: 'Petrov'},
        {firstName: 'Martin', lastName: 'Iliev'},
        {firstName: 'Georgi', lastName: 'Georgiev'}
    ];

    sorting(students);
}
solve();

module.exports  = solve;