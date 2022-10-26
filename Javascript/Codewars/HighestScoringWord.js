// success
// https://www.codewars.com/kata/5842df8ccbd22792a4000245/train/javascript

function expandedForm(num) {
  // Your code here
  let res = [];
  num = String(num);
  const len = num.length;
  for (let i = 0; i < len; i++) {
    let digit = num[i];
    if (digit !== "0") {
      digit = String(Number(digit) * Math.pow(10, len - i - 1));
      res.push(digit);
    }
  }
  return res.join(" + ");
}

console.log(expandedForm(70304));
