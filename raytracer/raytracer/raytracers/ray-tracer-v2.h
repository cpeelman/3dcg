#pragma once

#include "raytracers/ray-tracer.h"
#include <memory>

using namespace imaging;
using namespace math;


namespace raytracer
{
	namespace raytracers
	{
		namespace _private_
		{
			class RayTracerV2 : public RayTracerV1
			{
			public:
				TraceResult trace(const Scene&, const Ray&) const override;
				Color process_lights(const Scene&, const MaterialProperties&, const Hit&, const math::Ray&) const;
				Color process_light_source(const Scene&, const MaterialProperties&, const Hit&, const Ray&, LightSource) const;
				Color process_light_ray(const Scene&, const MaterialProperties&, const Hit&, const Ray&, const LightRay&) const;
				Color compute_diffuse(const MaterialProperties&, const Hit&, const Ray&, const LightRay&) const;
			};
		}

		/// <summary>
		/// Creates simplest ray tracer.
		/// </summary>
		RayTracer v2();
	}
}