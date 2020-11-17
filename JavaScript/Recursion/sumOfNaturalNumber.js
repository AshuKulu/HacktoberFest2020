const sumOfNaturalNumber = (num) => {
  if (num > 0) {
    return num + sumOfNaturalNumber(num - 1);
  }
  return num;
};
console.log(sumOfNaturalNumber(4));
