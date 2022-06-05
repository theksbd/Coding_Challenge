// Find the line that connects 2 points with known coordinates.

const point1 = [2, 2];
const point2 = [1, 1];

const findLine = (point1, point2) => {
    if (point1[0] === point2[0])
        return [point1[0], null];
    if (point1[1] === point2[1])
        return [0, point1[1]];
    const slope = (point2[1] - point1[1]) / (point2[0] - point1[0]);
    const intercept = point1[1] - slope * point1[0];
    return [slope, intercept];
}

const [slope, intercept] = findLine(point1, point2);

console.log(`Point 1: ${point1}`);
console.log(`Point 2: ${point2}`);
if (intercept === null)
    console.log(`Line: x = ${slope}`);
else if (slope === 0)
    console.log(`Line: y = ${intercept}`);
else if (slope === 1) {
    if (intercept === 0)
        console.log('Line: y = x');
    else
        console.log(`Line: y = x + ${intercept}`);
}
else {
    if (intercept === 0)
        console.log(`Line: y = ${slope}*`);
    else
        console.log(`Line: y = ${slope}x + ${intercept}`);
}