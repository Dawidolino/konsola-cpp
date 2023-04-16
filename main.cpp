#include <iostream>
#define max_queue_size 100
using namespace std;
class queue {
    int tab[max_queue_size];
    int size1;
public:
    queue();
    void inqueue(int);
    int dequeue();
    int size();
};
queue::queue() {
    size1=0;
}

void queue::inqueue(int d) {
    if (size1>=max_queue_size) {
        cout << "Kolejka jest pelna!"<< endl;
        exit;
    }
    if (size1==0) tab[0]=d;
    else {
        for (int i=size1; i>=1; i--)
        {
            tab[i]=tab[i-1];
        }
        tab[0]=d;
    }
    size1++;
}

int queue::dequeue() {
    if (size1==0) {
        cout <<"Kolejka jest pusta."<< endl;
        exit;
    }
    return tab[--size1];
}

int queue::size() {
    return size1;
}

int main() {
    queue k;
    k.inqueue(9);
    cout << "Size=" << k.size() << endl;
    k.inqueue(3);
    cout << "Size=" << k.size() << endl;
    k.inqueue(4);
    cout << "Size=" << k.size() << endl;
    k.dequeue();
    cout << "Size=" << k.size() << endl;
    k.dequeue();
    cout << "Size=" << k.size() << endl;
    k.dequeue();
    cout << "Size=" << k.size() << endl;
    k.dequeue();


    return 0;
}