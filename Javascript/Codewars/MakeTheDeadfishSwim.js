// success
// https://www.codewars.com/kata/51e0007c1f9378fa810002a9/train/javascript
function parse(data) {
  let res = [];
  let num = 0;
  for (let i = 0; i < data.length; i++) {
    const char = data[i];
    if (char === "i") {
      num++;
    } else if (char === "d") {
      num--;
    } else if (char === "s") {
      num *= num;
    } else if (char === "o") {
      res.push(num);
    }
  }
  return res;
}

console.log(parse("iiisdoso"));
