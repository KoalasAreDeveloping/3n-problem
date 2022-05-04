#include <iostream>

using namespace std;

class ThreeNCalc {
    public:
        void run(int n) {
            int oldN;
            while (n != 1)
            {
                oldN = n;
                n = NCalc(n);
                cout << oldN << " -> " << n << endl;
                if (n % 4 == 0) {
                    end();
                    break;
                } else if (n == 4) {
                    end();
                    break;
                } else {
                    continue;
                };
            };
        };

    private:
        int NCalc(int n) {
            if (n % 2 == 0) {
                return n / 2;
            } else {
                return n * 3 + 1;
            }
        };

        void end() {
            cout << "STUCK IN 4,2,1 LOOP" << endl;
        };
};

class processInput: public ThreeNCalc {
    public:
        void process() {
            cout << "Enter 'range' to test a range, 'number' to test a single number or 'quit' to quit: " << endl;
            string input;
            cin >> input;
            if (input == "range") {
                cout << "Enter the starting number: " << endl;
                int start;
                cin >> start;
                cout << "Enter the ending number: " << endl;
                int end;
                cin >> end;
                for (int i = start; i <= end; i++) {
                    cout << "======================================" << endl << "Testing: " << i << endl;
                    run(i);
                    cout << "======================================" << endl;
                }
            } else if (input == "number") {
                cout << "Enter the number: " << endl;
                int num;
                cin >> num;
                run(num);
            } else if (input == "quit") {
                cout << "Goodbye!" << endl;
            } else {
                cout << "Invalid input" << endl;
                process();
            }
        };
};

int main() {
    processInput p;
    p.process();   
}


