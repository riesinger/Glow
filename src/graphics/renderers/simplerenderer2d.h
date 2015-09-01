#pragma once

#include <GL/glew.h>
#include <vector>

#include "renderer2d.h"

#include "../renderable2d.h"

namespace Glow { namespace graphics {

class SimpleRenderer2D : public Renderer2D {
    private:
        std::vector<Renderable2D*> drawables_;
    public:
        SimpleRenderer2D();
        ~SimpleRenderer2D();

        virtual void submit(Renderable2D* renderable);
        virtual void flush();
};

}}