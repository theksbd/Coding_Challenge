// success
// https://www.codewars.com/kata/57eaeb9578748ff92a000009/train/javascript
function sumMix(x) {
  let sum = 0;
  x.forEach((e) => {
    if (typeof e === "string") e = Number(e);
    sum += e;
  });
  return sum;
}

console.log(sumMix(["5", "0", 9, 3, 2, 1, "9", 6, 7]));
