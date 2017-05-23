#pragma once

#include "../Interfaces/RSGraphicsPipeline.h"
//#include "../Interfaces/RSRenderer.h"
//#include "../RS_API.h"
#include "VulkanShader.h"



namespace RedSt4R
{
	namespace API
	{
		class VulkanGraphicsPipeline : public RSGraphicsPipeline
		{
		private:
			VkPipeline m_Pipeline;
			VkRect2D m_Rect2D;

			VulkanShader* m_Shader;

		public:
			VulkanGraphicsPipeline(RSShader* shader, RS_DESC_GRAPHICSPIPELINE* gpDesc);
			~VulkanGraphicsPipeline();

		};
	}
}
