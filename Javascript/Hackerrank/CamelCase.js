// success
// https://www.hackerrank.com/challenges/camelcase/problem?isFullScreen=true

function camelcase(s) {
  // Write your code here
  let count = 0;

  for (let i = 0; i < s.length; i++) {
    const c = s[i];
    if (
      c.charCodeAt(0) >= 'A'.charCodeAt(0) &&
      c.charCodeAt(0) <= 'Z'.charCodeAt(0)
    ) {
      count++;
    }
  }

  return count + 1;
}

console.log(camelcase('saveChangesInTheEditor'));
