#pragma once
#include "Resources/Model/Model.h"
#include "Resources/Shapes/Stars.h"

Model* CreateSun()
{
	Sun* shape = new Sun();

	Model* model = new Model(
		shape,
		glm::vec3(0.f, 0.f, 0.f),
		"Sun"
	);

	model->BindShader(
		"src/Resources/Shaders/SunVertex.txt",
		"src/Resources/Shaders/SunFragment.txt"
	);

	model->BindBuffer(
		shape->PositionIndex(),
		shape->PositionSize(),
		shape->PositionStride(),
		shape->PositionOffset()
	);

	model->BindTexture(
		"src/Resources/Textures/sun.jpg",
		0, 0, 0, 0,
		GL_TEXTURE0,
		"u_Texture",
		shape->TexCoordIndex(),
		shape->TexCoordSize(),
		shape->TexCoordStride(),
		shape->TexCoordOffset()
	);

	return model;
}

Model* CreateMercury()
{
	Mercury* shape = new Mercury();

	Model* model = new Model(
		shape,
		glm::vec3(3.0f, 0.0f, 0.0f),
		"Mercury"
	);

	model->BindShader(
		"src/Resources/Shaders/MercuryVertex.txt",
		"src/Resources/Shaders/MercuryFragment.txt"
	);

	model->BindBuffer(
		shape->PositionIndex(),
		shape->PositionSize(),
		shape->PositionStride(),
		shape->PositionOffset()
	);

	model->BindTexture(
		"src/Resources/Textures/mercury.jpg",
		0, 0, 0, 0,
		GL_TEXTURE0,
		"u_Texture",
		shape->TexCoordIndex(),
		shape->TexCoordSize(),
		shape->TexCoordStride(),
		shape->TexCoordOffset()
	);

	return model;
}

Model* CreateVenus()
{
	Venus* shape = new Venus();

	Model* model = new Model(
		shape,
		glm::vec3(5.0f, 0.0f, 0.0f),
		"Venus"
	);

	model->BindShader(
		"src/Resources/Shaders/VenusVertex.txt",
		"src/Resources/Shaders/VenusFragment.txt"
	);

	model->BindBuffer(
		shape->PositionIndex(),
		shape->PositionSize(),
		shape->PositionStride(),
		shape->PositionOffset()
	);

	model->BindTexture(
		"src/Resources/Textures/venus.jpg",
		0, 0, 0, 0,
		GL_TEXTURE0,
		"u_Texture",
		shape->TexCoordIndex(),
		shape->TexCoordSize(),
		shape->TexCoordStride(),
		shape->TexCoordOffset()
	);

	return model;
}

Model* CreateEarth()
{
	Earth* shape = new Earth();

	Model* model = new Model(
		shape,
		glm::vec3(7.0f, 0.0f, 0.0f),
		"Earth"
	);

	model->BindShader(
		"src/Resources/Shaders/EarthVertex.txt",
		"src/Resources/Shaders/EarthFragment.txt"
	);

	model->BindBuffer(
		shape->PositionIndex(),
		shape->PositionSize(),
		shape->PositionStride(),
		shape->PositionOffset()
	);

	model->BindTexture(
		"src/Resources/Textures/earth.jpg",
		0, 0, 0, 0,
		GL_TEXTURE0,
		"u_Texture",
		shape->TexCoordIndex(),
		shape->TexCoordSize(),
		shape->TexCoordStride(),
		shape->TexCoordOffset()
	);

	return model;
}

Model* CreateMoon()
{
	Moon* shape = new Moon();

	Model* model = new Model(
		shape,
		glm::vec3(8.5f, 0.0f, 0.0f),
		"Moon"
	);

	model->BindShader(
		"src/Resources/Shaders/MoonVertex.txt",
		"src/Resources/Shaders/MoonFragment.txt"
	);

	model->BindBuffer(
		shape->PositionIndex(),
		shape->PositionSize(),
		shape->PositionStride(),
		shape->PositionOffset()
	);

	model->BindTexture(
		"src/Resources/Textures/moon.jpg",
		0, 0, 0, 0,
		GL_TEXTURE0,
		"u_Texture",
		shape->TexCoordIndex(),
		shape->TexCoordSize(),
		shape->TexCoordStride(),
		shape->TexCoordOffset()
	);

	return model;
}

Model* CreateMars()
{
	Mars* shape = new Mars();

	Model* model = new Model(
		shape,
		glm::vec3(10.0f, 0.0f, 0.0f),
		"Mars"
	);

	model->BindShader(
		"src/Resources/Shaders/MarsVertex.txt",
		"src/Resources/Shaders/MarsFragment.txt"
	);

	model->BindBuffer(
		shape->PositionIndex(),
		shape->PositionSize(),
		shape->PositionStride(),
		shape->PositionOffset()
	);

	model->BindTexture(
		"src/Resources/Textures/mars.jpg",
		0, 0, 0, 0,
		GL_TEXTURE0,
		"u_Texture",
		shape->TexCoordIndex(),
		shape->TexCoordSize(),
		shape->TexCoordStride(),
		shape->TexCoordOffset()
	);

	return model;
}

Model* CreateJupiter()
{
	Jupiter* shape = new Jupiter();

	Model* model = new Model(
		shape,
		glm::vec3(14.0f, 0.0f, 0.0f),
		"Jupiter"
	);

	model->BindShader(
		"src/Resources/Shaders/JupiterVertex.txt",
		"src/Resources/Shaders/JupiterFragment.txt"
	);

	model->BindBuffer(
		shape->PositionIndex(),
		shape->PositionSize(),
		shape->PositionStride(),
		shape->PositionOffset()
	);

	model->BindTexture(
		"src/Resources/Textures/jupiter.jpg",
		0, 0, 0, 0,
		GL_TEXTURE0,
		"u_Texture",
		shape->TexCoordIndex(),
		shape->TexCoordSize(),
		shape->TexCoordStride(),
		shape->TexCoordOffset()
	);

	return model;
}

Model* CreateSaturn()
{
	Saturn* shape = new Saturn();

	Model* model = new Model(
		shape,
		glm::vec3(18.0f, 0.0f, 0.0f),
		"Saturn"
	);

	model->BindShader(
		"src/Resources/Shaders/SaturnVertex.txt",
		"src/Resources/Shaders/SaturnFragment.txt"
	);

	model->BindBuffer(
		shape->PositionIndex(),
		shape->PositionSize(),
		shape->PositionStride(),
		shape->PositionOffset()
	);

	model->BindTexture(
		"src/Resources/Textures/saturn.jpg",
		0, 0, 0, 0,
		GL_TEXTURE0,
		"u_Texture",
		shape->TexCoordIndex(),
		shape->TexCoordSize(),
		shape->TexCoordStride(),
		shape->TexCoordOffset()
	);

	return model;
}

Model* CreateSaturnRing()
{
	SaturnRing* shape = new SaturnRing();

	Model* model = new Model(
		shape,
		glm::vec3(18.0f, 0.0f, 0.0f),
		"SaturnRing"
	);

	model->BindShader(
		"src/Resources/Shaders/SaturnRingVertex.txt",
		"src/Resources/Shaders/SaturnRingFragment.txt"
	);

	model->BindBuffer(
		shape->PositionIndex(),
		shape->PositionSize(),
		shape->PositionStride(),
		shape->PositionOffset()
	);

	model->BindTexture(
		"src/Resources/Textures/saturn_ring.jpg",
		0, 0, 0, 0,
		GL_TEXTURE0,
		"u_Texture",
		shape->TexCoordIndex(),
		shape->TexCoordSize(),
		shape->TexCoordStride(),
		shape->TexCoordOffset()
	);

	return model;
}

Model* CreateUranus()
{
	Uranus* shape = new Uranus();

	Model* model = new Model(
		shape,
		glm::vec3(23.0f, 0.0f, 0.0f),
		"Uranus"
	);

	model->BindShader(
		"src/Resources/Shaders/UranusVertex.txt",
		"src/Resources/Shaders/UranusFragment.txt"
	);

	model->BindBuffer(
		shape->PositionIndex(),
		shape->PositionSize(),
		shape->PositionStride(),
		shape->PositionOffset()
	);

	model->BindTexture(
		"src/Resources/Textures/uranus.jpg",
		0, 0, 0, 0,
		GL_TEXTURE0,
		"u_Texture",
		shape->TexCoordIndex(),
		shape->TexCoordSize(),
		shape->TexCoordStride(),
		shape->TexCoordOffset()
	);

	return model;
}

Model* CreateUranusRing()
{
	UranusRing* shape = new UranusRing();

	Model* model = new Model(
		shape,
		glm::vec3(23.0f, 0.0f, 0.0f),
		"UranusRing"
	);

	model->BindShader(
		"src/Resources/Shaders/UranusRingVertex.txt",
		"src/Resources/Shaders/UranusRingFragment.txt"
	);

	model->BindBuffer(
		shape->PositionIndex(),
		shape->PositionSize(),
		shape->PositionStride(),
		shape->PositionOffset()
	);

	model->BindTexture(
		"src/Resources/Textures/uranus_ring.jpg",
		0, 0, 0, 0,
		GL_TEXTURE0,
		"u_Texture",
		shape->TexCoordIndex(),
		shape->TexCoordSize(),
		shape->TexCoordStride(),
		shape->TexCoordOffset()
	);

	return model;
}

Model* CreateNeptune()
{
	Neptune* shape = new Neptune();

	Model* model = new Model(
		shape,
		glm::vec3(28.0f, 0.0f, 0.0f),
		"Neptune"
	);

	model->BindShader(
		"src/Resources/Shaders/NeptuneVertex.txt",
		"src/Resources/Shaders/NeptuneFragment.txt"
	);

	model->BindBuffer(
		shape->PositionIndex(),
		shape->PositionSize(),
		shape->PositionStride(),
		shape->PositionOffset()
	);

	model->BindTexture(
		"src/Resources/Textures/neptune.jpg",
		0, 0, 0, 0,
		GL_TEXTURE0,
		"u_Texture",
		shape->TexCoordIndex(),
		shape->TexCoordSize(),
		shape->TexCoordStride(),
		shape->TexCoordOffset()
	);

	return model;
}

Model* CreatePluto()
{
	Pluto* shape = new Pluto();

	Model* model = new Model(
		shape,
		glm::vec3(33.0f, 0.0f, 0.0f),
		"Pluto"
	);

	model->BindShader(
		"src/Resources/Shaders/PlutoVertex.txt",
		"src/Resources/Shaders/PlutoFragment.txt"
	);

	model->BindBuffer(
		shape->PositionIndex(),
		shape->PositionSize(),
		shape->PositionStride(),
		shape->PositionOffset()
	);

	model->BindTexture(
		"src/Resources/Textures/pluto.jpg",
		0, 0, 0, 0,
		GL_TEXTURE0,
		"u_Texture",
		shape->TexCoordIndex(),
		shape->TexCoordSize(),
		shape->TexCoordStride(),
		shape->TexCoordOffset()
	);

	return model;
}

Model* CreateAsteroid()
{
	Asteroid* shape = new Asteroid();

	Model* model = new Model(
		shape,
		glm::vec3(38.f, 0.f, 0.f),
		"Asteroid"
	);

	model->BindShader(
		"src/Resources/Shaders/AsteroidVertex.txt",
		"src/Resources/Shaders/AsteroidFragment.txt"
	);

	model->BindBuffer(
		shape->PositionIndex(),
		shape->PositionSize(),
		shape->PositionStride(),
		shape->PositionOffset()
	);

	model->BindTexture(
		"src/Resources/Textures/asteroid.jpg",
		0, 0, 0, 0,
		GL_TEXTURE0,
		"u_Texture",
		shape->TexCoordIndex(),
		shape->TexCoordSize(),
		shape->TexCoordStride(),
		shape->TexCoordOffset()
	);

	return model;
}
