#include "professor.h"

Professor::Professor()
{
    graduacao = nullptr;
    titulacao = nullptr;
}

Professor::~Professor()
{
    delete &graduacao;
    delete &titulacao;
}

