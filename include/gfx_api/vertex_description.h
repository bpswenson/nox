//
// Created by brian on 3/21/18.
//

// goal is to make this sorta gfx api agnostic however
// will prefer opengl/vulkan to directx when a distinction needs to be made

#pragma once

#include "common.h"

namespace nox {

// will need more
enum class VertexSemantic {
    Position,
    Normal,
    Color,
    TexCoord
};

// form of type '_' count
// f32_1 = 1 float
enum class VertexType {
    F32_1,
    F32_2,
    F32_3,
    F32_4,

    I16_1,
    I16_2,
    I16_3,
    I16_4,

    U16_1,
    U16_2,
    U16_3,
    U16_4,

    I32_1,
    I32_2,
    I32_3,
    I32_4,

    U32_1,
    U32_2,
    U32_3,
    U32_4,

};

///A buffer will contain one or more of these
class VertexDescription {
public:
    VertexDescription() = default;

    VertexDescription(u16 source, u16 offset, VertexType type, VertexSemantic semantic, u16 index = 0, u32 step_size = 0) :
            m_source(source),
            m_offset(offset),
            m_type(type),
            m_semantic(semantic),
            m_index(index),
            m_step_size(step_size) {}

    inline u16 source() const { return m_source; }
    inline u32 offset() const { return m_offset; }
    inline VertexSemantic semantic() const { return m_semantic; }
    inline VertexType type() const { return m_type; }
    inline u16 index() const { return m_index; }
    inline u32 step_size() const { return m_step_size; }

private:
    u16 m_source;
    u32 m_offset;
    VertexSemantic m_semantic;
    VertexType m_type;
    u16 m_index;
    u32 m_step_size;
};
}