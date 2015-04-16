Please add detail to this file on how you implement polymorphism in Book and it's subclasses.
* Book is the base class.
* Novel  and TextBook are its child classes.
* A pure virtual function toString makes the base class abstract. So, an object cannot be created of Book.
* Therefore, constructors of Book are removed. 
* Setters and Getters are used for price and quantity.
* Whereas, book’s name, and author object are set as protected. This is done, so that they can be set from within the constructor of Novel  and TextBook. They do not need setter, and  hence cannot be changed once created. 
* An object of the book now points to the object of Novel and TextBook.
    - Book *book= &textbook;
* The toString method of the pointed class is accessed via ‘->’ notation instead of the ‘.’ operator.
    - book->toString();

