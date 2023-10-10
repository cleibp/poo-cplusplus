#include <iostream>
#include <cmath>

// Classe base abstrata (com abstração)
class Forma {
  public:
    virtual double calcularArea() const = 0; // Método abstrato para abstração
};

// Subclasse que herda de Forma
class Retangulo : public Forma {
  private:
      double base;
      double altura;
  
  public:
      Retangulo(double b, double h) : base(b), altura(h) {}
  
      double calcularArea() const override {
          return base * altura;
      }
};

// Subclasse que herda de Forma
class Circulo : public Forma {
  private:
      double raio;
  
  public:
      Circulo(double r) : raio(r) {}
  
      double calcularArea() const override {
          return M_PI * raio * raio;
      }
};

int main() {
  // Criar uma forma de retângulo
  Retangulo retangulo(5.0, 4.0);

  // Calcular e imprimir a área do retângulo
  std::cout << "Área do Retângulo: " << retangulo.calcularArea() << std::endl;

  // Criar uma forma de círculo
  Circulo circulo(3.0);

  // Calcular e imprimir a área do círculo
  std::cout << "Área do Círculo: " << circulo.calcularArea() << std::endl;

  return 0;
}
