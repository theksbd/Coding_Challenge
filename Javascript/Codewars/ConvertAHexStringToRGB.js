// success
// https://www.codewars.com/kata/5282b48bb70058e4c4000fa7/train/javascript
function hexStringToRGB(hexString) {
  const rgb = {};
  const hexa = {
    A: 10,
    B: 11,
    C: 12,
    D: 13,
    E: 14,
    F: 15,
  };
  hexString = hexString.slice(1).toUpperCase();
  let decimalValue = 0;
  let section = 1;
  for (let i = 0; i < hexString.length; i++) {
    const hex =
      Number(isNaN(hexString[i]) ? hexa[hexString[i]] : Number(hexString[i]));
    decimalValue += hex * 16 ** (i % 2 === 0);
    if (i % 2 !== 0) {
      if (section === 1) {
        rgb.r = decimalValue;
      } else if (section === 2) {
        rgb.g = decimalValue;
      } else {
        rgb.b = decimalValue;
      }
      section++;
      decimalValue = 0;
    }
  }
  return rgb;
}

const rgb = hexStringToRGB("#FF9933");
console.log(rgb);
