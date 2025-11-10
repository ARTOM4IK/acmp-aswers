
    #include <iostream>
    #include <vector>
    
    using namespace std;
    int main()
    {
        int n, m, c1, c2, c3;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        cin >> m;
        string s;
        for(int j = 0; j < m; ++j){
            cin >> s;
            if(s == "rsq"){
                cin >> c1 >> c2;
                int sum = 0;
                for(int i = c1 - 1; i < c2; ++i)
                    sum+=a[i];
                cout << sum << endl;
            }
            else if(s[0] == 'u'){
                cin >> c1 >> c2 >> c3;
                for(int i = c1 - 1; i < c2; ++i)
                    a[i] = c3;
            }
            else if(s == "rmq"){
                cin >> c1 >> c2;
                int minim = INFINITY;
                for(int i = c1 - 1; i < c2; ++i)
                    minim = min(a[i], minim);
                cout << minim << endl;
            }
            else if(s == "add"){
                cin >> c1 >> c2 >> c3;
                for(int i = c1 - 1; i < c2; ++i)
                    a[i]+=c3;
            }
            else if(s == "get"){
                cin >> c1;
                cout << a[c1 - 1] << endl;
            }
        }
        return 0;
    }

