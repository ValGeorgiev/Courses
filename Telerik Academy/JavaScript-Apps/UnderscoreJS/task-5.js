/*
 Create a function that:
 *   **Takes** an array of animals
 *   Each animal has propeties `name`, `species` and `legsCount`
 *   **finds** and **prints** the total number of legs to the console in the format:
 *   "Total number of legs: TOTAL_NUMBER_OF_LEGS"
 *   **Use underscore.js for all operations**
 */

var _ = require('underscore');

function totalLegs(animals) {
    var sum = 0;
    _.each(animals, function(animal){
        sum += animal.legsCount;
    });
    console.log("Total number of legs: " + sum);
}

function solve(){
    var animals = [
        {name: 'bear', species: 'mammal', legsCount: 4},
        {name: 'pigeon', species: 'bird', legsCount: 2},
        {name: 'dog', species: 'mammal', legsCount: 4},
        {name: 'donkey', species: 'mammal', legsCount: 4},
        {name: 'person', species: 'mammal', legsCount: 2},
        {name: 'cat', species: 'mammal', legsCount: 4}
    ];

    totalLegs(animals);
}
solve();

module.exports  = solve;