#ifndef FUNCION_H
#define FUNCION_H

#include <vector>
#include <tuple>

class TriplePitagorico {
public:
    TriplePitagorico(int max_a);

    // Método para encontrar triples pitagóricos
    std::vector<std::tuple<int, int, int>> encontrarTriples();

private:
    int max_a;
};

#endif

