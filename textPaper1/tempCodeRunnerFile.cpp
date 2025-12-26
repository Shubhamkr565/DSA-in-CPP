int matric[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>matric[i][j];
        }
    }

    cout<<"Matric Data: "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<matric[i][j]<<" ";
            cout<<endl;
        }
    }