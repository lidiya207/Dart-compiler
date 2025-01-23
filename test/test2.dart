// Define a class
class MyClass {
  String name;
  int age;

  // Constructor
  MyClass(this.name, this.age);

  // Method
  void displayInfo() {
    print("Name: $name");
    print("Age: $age");
  }
}

// Define a function
void greet(String name) {
  print("Hello, $name!");
}

void main() {
  // Create an instance of the class
  var obj = MyClass("John", 30);

  // Call the method of the class
  obj.displayInfo();

  // Call the function
  greet("Alice");
}
