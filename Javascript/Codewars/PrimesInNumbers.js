// success
// https://www.codewars.com/kata/54d512e62a5e54c96200019e/train/javascript
function primeFactors(n) {
  //your code here
  let res = "";
  let i = 2;
  while (n > 1) {
    let exp = 0;
    while (n % i === 0) {
      n /= i;
      exp++;
    }
    if (exp !== 0) {
      if (exp === 1) {
        res += `(${i})`;
      } else {
        res += `(${i}**${exp})`;
      }
    }
    i++;
  }
  return res;
}

console.log(primeFactors(86240));
console.log(primeFactors(7775460));
