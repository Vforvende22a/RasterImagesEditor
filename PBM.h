#pragma once
#include "Image.h"

class PBM:public Image
{
public:
	PBM()=default;
	PBM(const  std::string& _file);
	virtual ~PBM()=default;
	virtual Image* clone() const override;

public:
	virtual void monochrome() override {};
	virtual void grayScale() override {}
	virtual void negative() override;

	virtual void rotateLeft() override;
	virtual void rotateRight() override;
	virtual void flipTop() override;
	virtual void flipLeft() override;

	virtual bool crop(int topLeftX, int topLeftY, int botRightX, int botRightY)override;

	virtual void save() override;

public:
	const std::vector<std::vector<bool>>& getMatrix()const;
	static bool getMaxValue();

protected:
	virtual void transposeMatrix() override;
	virtual void reverseColumns()   override;
	virtual void reverseRows()      override;

private:
	void writeFileHeader(std::ofstream& newImage)const;
	void writeMatrix(std::ofstream& newImage, unsigned short _width, unsigned short _length)const;

private:
	void setMatrix(std::ifstream& newImage);

	virtual void setFormat(const std::string& _format) override;
	bool setValue(int _value);

private:
	std::vector<std::vector<bool>> pixels;
	static const bool maxValue = 1;
};
