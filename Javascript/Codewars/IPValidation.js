// success
// https://www.codewars.com/kata/515decfd9dcfc23bb6000006/train/javascript
function isValidIP(str) {
  const numbers = str.split(".");
  console.log(numbers);
  if (numbers.length !== 4) {
    return false;
  }
  for (let i = 0; i < numbers.length; i++) {
    const number = numbers[i];
    const num = Number(number);
    if (num.toString() === "NaN") {
      return false;
    }
    if (num.toString().length !== number.length) {
      return false;
    }
    if (num < 0 || num > 255) {
      return false;
    }
  }
  return true;
}

console.log(isValidIP("137.255.156.100"));
console.log(isValidIP("037.255.156.100"));
console.log(isValidIP("abc.def.ghi.jkl"));
console.log(isValidIP(""));
console.log(isValidIP("0.0.0.0"));
console.log(isValidIP("123,45,67,89"));
