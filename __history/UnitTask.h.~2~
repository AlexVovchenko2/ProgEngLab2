//---------------------------------------------------------------------------

#ifndef UnitTaskH
#define UnitTaskH

#include <vector>

class UserTask{
public:
	int n, m;
	std::vector<std::vector<float>> matrix;

	UserTask(int n, int m){
		this->n = n;
        this->m = m;
	}

    void createVect(){
		std::vector<float> temp;
		for (int i = 0; i < this->m; i++) {
			for (int j = 0; j < this->n; j++)
				temp.push_back(0.0);
			this->matrix.push_back(temp);
			temp.clear();
		}
	}
};
//---------------------------------------------------------------------------
#endif
