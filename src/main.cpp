#include "main.h"

#include <iostream>
#include <vector>

#include "config.h"
#include "utils/csv_loader.h"
#include "core/trainer.h"

using namespace std;

int main() {
    // New trainer session
    trainer trainer;

    // Load dataset
    trainer.dataset = utils::load_csv(INPUT_PATH);

    std::cout << "Program is running..." << std::endl;
    return 0;
}
