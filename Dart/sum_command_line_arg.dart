/*sum of inputs in command line arguments*/

bool isNumeric(String s) {
  if (s == null) {
    return false;
  }
  return double.parse(s, (e) => null) != null;
}

void main(List<String> args) {
  var sum = 0.00;
  var i;
  for (i in args) {
    if (isNumeric(i)) {
      sum += double.parse(i);
    }
  }
  print("sum = $sum");
}
