// success
// https://www.codewars.com/kata/52efefcbcdf57161d4000091/train/javascript
function count(string) {
  // The function code should be here
  if (string === "") return {};
  let freq = {};
  for (let c of string) {
    if (freq.hasOwnProperty(c)) freq[c] += 1;
    else freq[c] = 1;
  }
  return freq;
}

console.log(count("aba"));
