#include<iostream>
#include<vector>
#include<algorithm>
void solve(const int n){

	int xLevelsSize = 0;
	int yLevelSize = 0;

	std::cin >> xLevelsSize;
	
	std::vector<int> xLevels(xLevelsSize);

	for(int i = 0; i < xLevelsSize; i++){
		std::cin >> xLevels[i];
	}

	std::cin >> yLevelSize;

	std::vector<int> yLevels(yLevelSize);

	for(int i = 0; i < yLevelSize; i++){
		std::cin >> yLevels[i];
	}

	std::vector<bool> visited(n);

	for(int i = 0; i < xLevelsSize; i++){
		visited[xLevels[i] - 1] = true;
	}

	for(int i = 0; i < yLevelSize; i++){
		visited[yLevels[i] - 1] = true;
	}

	auto allPassed = std::all_of(visited.begin(), visited.end(), [](const bool a){return a;});

	if(allPassed){
		std::cout << "I become the guy.\n";
	}else{
		std::cout << "Oh, my keyboard!\n";
	}
}

int main(){
	int n;
	std::cin >> n;

	solve(n);
}
