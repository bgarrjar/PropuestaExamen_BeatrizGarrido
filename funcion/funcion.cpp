#include "funcion.h"
#include <cmath>

TriplePitagorico::TriplePitagorico(int max_a) : max_a(max_a) {}

std::vector<std::tuple<int, int, int>> TriplePitagorico::encontrarTriples() {
    std::vector<std::tuple<int, int, int>> triples;

    for (int a = 1; a <= max_a; a++) {
        for (int b = a; b <= max_a; b++) {
            double c = sqrt(a * a + b * b);

            if (c == static_cast<int>(c)) {
                triples.push_back(std::make_tuple(a, b, static_cast<int>(c)));
            }
        }
    }

    return triples;
}
