#ifndef SCULPTOR_H
#define SCULPTOR_H

struct Voxel {
  float r,g,b; // Colors
  float a; // Transparency
  bool isOn; // Included or not
};

/**
 * @brief A classe Sculptor
 */

class Sculptor {
protected:
  Voxel ***v; // 3D matrix
  int nx,ny,nz; // Dimensions
  float r,g,b,a; // Current drawing color
public:
  /**
   * @brief Sculptor - Construtor da classe
   * @param _nx - Parâmetro relacionado ao tamanho da matriz tridimensional, no eixo x
   * @param _ny - Parâmetro relacionado ao tamanho da matriz tridimensional, no eixo y
   * @param _nz - Parâmetro relacionado ao tamanho da matriz tridimensional, no eixo z
   */
  Sculptor(int _nx=5, int _ny=5, int _nz=5);
  ~Sculptor();
  /**
   * @brief setColor - Função que muda a cor do desenho
   * @param r - Valor que controla a quantidade de vermelho na cor (entre 0 e 1)
   * @param g - Valor que controla a quantidade de verde na cor (entre 0 e 1)
   * @param b - Valor que controla a quantidade de azul na cor (entre 0 e 1)
   * @param alpha - Valor que controla a opacidade do desenho
   */
  void setColor(float r, float g, float b, float alpha);
  /**
   * @brief putVoxel - Função que coloca um voxel na posição fornecida
   * @param x - Posição do voxel no eixo x
   * @param y - Posição do voxel no eixo y
   * @param z - Posição do voxel no eixo z
   */
  void putVoxel(int x, int y, int z);
  /**
   * @brief cutVoxel - Função que apaga um voxel na posição fornecida
   * @param x - Posição do voxel no eixo x
   * @param y - Posição do voxel no eixo y
   * @param z - Posição do voxel no eixo z
   */
  void cutVoxel(int x, int y, int z);
  /**
   * @brief putBox - Função que coloca voxels em formato de caixa na área fornecida
   * @param x0 - Posição do primeiro voxel no eixo x
   * @param x1 - Posição do último voxel no eixo x
   * @param y0 - Posição do primeiro voxel no eixo y
   * @param y1 - Posição do último voxel no eixo y
   * @param z0 - Posição do primeiro voxel no eixo z
   * @param z1 - Posição do último voxel no eixo z
   */
  void putBox(int x0, int x1, int y0, int y1, int z0, int z1);
  /**
   * @brief cutBox - Função que retira voxels em formato de caixa na área fornecida
   * @param x0 - Posição do primeiro voxel no eixo x
   * @param x1 - Posição do último voxel no eixo x
   * @param y0 - Posição do primeiro voxel no eixo y
   * @param y1 - Posição do último voxel no eixo y
   * @param z0 - Posição do primeiro voxel no eixo z
   * @param z1 - Posição do último voxel no eixo z
   */
  void cutBox(int x0, int x1, int y0, int y1, int z0, int z1);
  /**
   * @brief putSphere - Função que coloca voxels em formato de esfera de um raio fornecido ao redor do centro fornecido
   * @param xcenter - Posição do centro da esfera no eixo x
   * @param ycenter - Posição do centro da esfera no eixo y
   * @param zcenter - Posição do centro da esfera no eixo z
   * @param radius - Raio da esfera
   */
  void putSphere(int xcenter, int ycenter, int zcenter, int radius);
  /**
   * @brief cutSphere - Função que retira voxels em formato de esfera de um raio fornecido ao redor do centro fornecido
   * @param xcenter - Posição do centro da esfera no eixo x
   * @param ycenter - Posição do centro da esfera no eixo y
   * @param zcenter - Posição do centro da esfera no eixo z
   * @param radius - Raio da esfera
   */
  void cutSphere(int xcenter, int ycenter, int zcenter, int radius);
  /**
   * @brief putEllipsoid - Função que coloca voxels em formato de elipse com os raios fornecidos ao redor do centro fornecido
   * @param xcenter - Posição do centro da elipse no eixo x
   * @param ycenter - Posição do centro da elipse no eixo y
   * @param zcenter - Posição do centro da elipse no eixo z
   * @param rx - Raio da elipse no eixo x
   * @param ry - Raio da elipse no eixo y
   * @param rz - Raio da elipse no eixo z
   */
  void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
  /**
   * @brief cutEllipsoid - Função que retira voxels em formato de elipse com os raios fornecidos ao redor do centro fornecido
   * @param xcenter - Posição do centro da elipse no eixo x
   * @param ycenter - Posição do centro da elipse no eixo y
   * @param zcenter - Posição do centro da elipse no eixo z
   * @param rx - Raio da elipse no eixo x
   * @param ry - Raio da elipse no eixo y
   * @param rz - Raio da elipse no eixo z
   */
  void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
  /**
   * @brief writeOFF - Função que escreve o arquivo .off do desenho feito
   * @param filename - Nome do arquivo
   */
  void writeOFF(char* filename);
};

#endif // SCULPTOR_H
