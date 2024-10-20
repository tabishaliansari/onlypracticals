#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int nn;
    cout << "\nEnter Number of Nodes: ";
    cin >> nn;
    // Define the graph with dynamic size
    vector<vector<int>> graph(nn, vector<int>(nn, -1));
    vector<vector<int>> via(nn, vector<int>(nn, -1));
    // Vertex names
    vector<char> ch{'A', 'B', 'C', 'D', 'E', 'F', 'G'};
    // Get input for the graph distances
    for (int i = 0; i < nn; ++i)
    {
        for (int j = 0; j < nn; ++j)
        {
            if (i == j)
            {
                graph[i][j] = 0;
            }
            else if (graph[i][j] == -1)
            {
                cout << "\nEnter Distance between " << ch[i] << " - " << ch[j] << " : ";
                int t;
                cin >> t;
                graph[i][j] = graph[j][i] = t;
            }
        }
    }
    cout << "\nAfter Initialization:";
    // Display table initialization
    for (int i = 0; i < nn; ++i)
    {
        cout << "\n"
             << ch[i] << " Table";
        cout << "\nNode\tDist\tVia";
        for (int j = 0; j < nn; ++j)
        {
            cout << "\n"
                 << ch[j] << "\t" << graph[i][j] << "\t" << via[i][j];
        }
    }
    // Sharing table
    vector<vector<vector<int>>> sh(nn, vector<vector<int>>(nn, vector<int>(nn, -1)));
    for (int i = 0; i < nn; ++i)
    {
        for (int j = 0; j < nn; ++j)
        {
            for (int k = 0; k < nn; ++k)
            {
                if ((graph[i][j] > -1) && (graph[j][k] > -1))
                {
                    sh[i][j][k] = graph[j][k] + graph[i][j];
                }
                else
                {
                    sh[i][j][k] = -1;
                }
            }
        }
    }
    // Displaying shared table
    for (int i = 0; i < nn; ++i)
    {
        cout << "\n\nFor " << ch[i];
        for (int j = 0; j < nn; ++j)
        {
            cout << "\nFrom " << ch[j];
            for (int k = 0; k < nn; ++k)
            {
                cout << "\n"
                     << ch[k] << " " << sh[i][j][k];
            }
        }
    }
    // Updating final distances
    vector<vector<int>> final(nn, vector<int>(nn, -1));
    for (int i = 0; i < nn; ++i)
    {
        for (int j = 0; j < nn; ++j)
        {
            final[i][j] = graph[i][j];
            via[i][j] = i;
            for (int k = 0; k < nn; ++k)
            {
                if ((final[i][j] > sh[i][k][j] || final[i][j] == -1) && sh[i][k][j] > -1)
                {
                    final[i][j] = sh[i][k][j];
                    via[i][j] = k;
                }
            }
            if (final[i][j] == -1)
            {
                for (int k = 0; k < nn; ++k)
                {
                    if ((final[i][k] != -1) && (final[k][j] != -1))
                    {
                        if (final[i][j] == -1 || (final[i][j] != -1 && final[i][j] > final[i][k] + final[k][j]))
                        {
                            if (final[i][k] + final[k][j] > -1)
                            {
                                final[i][j] = final[i][k] + final[k][j];
                                via[i][j] = k;
                            }
                        }
                    }
                }
            }
        }
    }
    cout << "\nAfter Update:";
    // Display table update
    for (int i = 0; i < nn; ++i)
    {
        cout << "\n"
             << ch[i] << " Table";
        cout << "\nNode\tDist\tVia";
        for (int j = 0; j < nn; ++j)
        {
            cout << "\n"
                 << ch[j] << "\t" << final[i][j] << "\t";
            if (i == via[i][j])
            {
                cout << "-";
            }
            else
            {
                cout << ch[via[i][j]];
            }
        }
    }
    cin.get(); // To pause the console
    cin.get(); // To wait for user input before closing
    return 0;
}