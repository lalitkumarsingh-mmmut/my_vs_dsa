<<<<<<< HEAD
int n ;
    cout << "Enter the number of rows: ";
    cin >> n;
    int i = 1;

    while(i <= n) {

        // Print spaces
        int j = 0;
        while(j <= i-1) {
            cout  << " ";
            j++;
        }

        // Print stars
        int k = 1;
        while(k <= n-i+1) {
            cout << " ";
            k++;
        }

        cout << endl;
        i++;
    }

    return 0;
}
=======
while (i <= n) {
        int j = 1;
        while (j <= n) {
            char ch = count;
            cout << ch << " ";    
            count=count+1;
            j = j + 1;
        }
        i=i+1;
        cout << endl;
    }
>>>>>>> 4ef0243bb6250c2e096958f569c31d5c12ee764b
