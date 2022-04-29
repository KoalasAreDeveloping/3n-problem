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

int main() {
    ThreeNCalc calc;
    int n;
    cout << "Enter a number: ";
    cin >> n;
    calc.run(n);
}


