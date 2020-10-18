import 'dart:io';

void main() {
  print("Enter first number");
  var a = double.parse(stdin.readLineSync());
  print("Enter second number");
  var b = double.parse(stdin.readLineSync());
  print("\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\nEnter choice : ");
  var choice = int.parse(stdin.readLineSync());
  var temp = 0.0;
  switch (choice) {
    case 1:
      temp = a + b;
      print("Sum = $a + $b = $temp");
      break;
    case 2:
      temp = a - b;
      print("Difference = $a - $b = $temp");
      break;
    case 3:
      temp = a * b;
      print("Product = $a * $b = $temp");
      break;
    case 4:
      if (b == 0) {
        print("Not possible");
        break;
      }
      temp = a / b;
      print("Quotient = $a / $b = $temp");
      break;
    default:
      print("Wrong choice");
  }
}
