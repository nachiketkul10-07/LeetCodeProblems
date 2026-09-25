class Solution {
public:
    vector<int> getRow(int rowIndex) {
      
      vector<int> row;
      row.push_back(1);
        
        for(int i =1; i<= rowIndex;i++)
        {
            vector<int> newrow;
            newrow.push_back(1);

            for(int j = 1; j< row.size(); j++)
            {
                newrow.push_back(row[j-1]+ row[j]);

            }
            newrow.push_back(1);
            row = newrow;
        }
         return row;
        
    }
};