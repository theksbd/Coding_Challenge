const ages = [12, 22, 20, 18, 19, 25, 37, 33, 45, 40, 10, 8, 51];

// get all ages >= 30
const newArray = ages.filter(age => age >= 30);

// create new array with ages increased by 1
// const newArray = ages.map((age) => age + 1);

// check if there is an age <= 10
// const newArray = ages.some((age) => age <= 10);

// check if all ages is <= 10
// const newArray = ages.every((age) => age <= 10);

// find the first age = 10
// const newArray = ages.find((age) => age === 10);

// with each age, log it
// ages.forEach((age) => console.log(age));

// calculate sum of all ages
// const newArray = ages.reduce(
//   (totalAge, currentAge) => totalAge + currentAge,
//   0
// );

console.log(newArray);
