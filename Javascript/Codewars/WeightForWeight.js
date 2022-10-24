// success
// https://www.codewars.com/kata/55c6126177c9441a570000cc/train/javascript
function orderWeight(strng) {
  // your code
  const weights = strng.split(" ");
  const compare = function (a, b) {
    let weightA = 0;
    let weightB = 0;
    for (let i = 0; i < a.length; i++) {
      weightA += Number(a[i]);
    }
    for (let i = 0; i < b.length; i++) {
      weightB += Number(b[i]);
    }
    if (weightA === weightB) {
      return a.localeCompare(b);
    }
    return weightA - weightB;
  };
  weights.sort(compare);
  return weights.join(" ");
}

const test = orderWeight("2000 10003 1234000 44444444 9999 11 11 22 123");
const res = "11 11 2000 10003 22 123 1234000 44444444 9999";

if (test === res) {
  console.log("Pass");
} else {
  console.log("Fail");
}
