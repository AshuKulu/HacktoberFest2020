/*Selection sort*/
void main() {
  var arr = [10, 20, 2, 5, 22, 31, 10];
  for (var i = 0; i < arr.length; i++) {
    var pos = i;
    var min = arr[i];
    for (var j = i + 1; j < arr.length; j++) {
      if (min > arr[j]) {
        min = arr[j];
        pos = j;
      }
    }
    if (pos != i) {
      var temp = arr[i];
      arr[i] = arr[pos];
      arr[pos] = temp;
    }
  }
  print(arr);
}
