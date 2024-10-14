
struct Book
{
    char title[100];
    char author[50];
    long int isbn;
    double price;
};


int main()
{
    struct Book book1 = {"Le Seigneur des anneaux", "J.R.R. Tolkien", 2266286269, 18.90};
    printBook(book1);
    return 0;
}







