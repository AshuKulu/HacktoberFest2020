let a = [1, 2, 3, 4, 5, 345, 2, 34, 34];
// QuickSort(0 ,a.length)
// console.log(a)

const partition = (l, h) => {
  let i = l;
  let j = h;
  let pivot = a[l];
  while (i < j) {
    do {
      i++;
    } while (pivot >= a[i]);

    do {
      j--;
    } while (pivot < a[j]);

    if (i < j) {
      let x = a[i];
      a[i] = a[j];
      a[j] = x;
    }
  }
  let x = a[l];
  a[l] = a[j];
  a[j] = x;
  return j;
};

const QuickSort = (l, h) => {
  if (l < h) {
    let j = partition(l, h);
    QuickSort(l, j);
    QuickSort(j + 1, h);
  }
  return;
};

QuickSort(0, a.length);
console.log(a);
