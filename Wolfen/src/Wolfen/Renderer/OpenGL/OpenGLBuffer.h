#pragma once
#include "Wolfen/Renderer/Buffer.h"

namespace Wolfen
{
	class OpenGLVertexBuffer : public VertexBuffer
	{
	public:
		OpenGLVertexBuffer( float* vertices, uint32_t size );

		virtual ~OpenGLVertexBuffer();

		virtual void Bind() const;
		virtual void Unbind() const;
	private:
		uint32_t m_bufferID;
	};	
	
	class OpenGLIndexBuffer : public IndexBuffer
	{
	public:
		OpenGLIndexBuffer( uint32_t* indices, uint32_t count );
		virtual ~OpenGLIndexBuffer();

		virtual void Bind() const;
		virtual void Unbind() const;

		virtual uint32_t GetCount() const { return m_count; };

	private:
		uint32_t m_bufferID;
		uint32_t m_count;
	};

}