/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen2_screen/Screen2ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/canvas_widget_renderer/CanvasWidgetRenderer.hpp>


Screen2ViewBase::Screen2ViewBase() :
    graphClickedCallback(this, &Screen2ViewBase::graphClickedCallbackHandler)
{

    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);

    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    box1.setPosition(0, 0, 480, 272);
    box1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));

    dynamicGraph1.setScale(1);
    dynamicGraph1.setPosition(0, 0, 480, 272);
    dynamicGraph1.setGraphAreaMargin(25, 20, 20, 20);
    dynamicGraph1.setGraphAreaPadding(0, 0, 0, 0);
    dynamicGraph1.setGraphRangeY(0, 100);
    dynamicGraph1.setClickAction(graphClickedCallback);

    dynamicGraph1MajorXAxisLabel.setScale(1);
    dynamicGraph1MajorXAxisLabel.setInterval(10);
    dynamicGraph1MajorXAxisLabel.setLabelTypedText(touchgfx::TypedText(T___SINGLEUSE_7A1U));
    dynamicGraph1MajorXAxisLabel.setColor(touchgfx::Color::getColorFromRGB(20, 151, 197));
    dynamicGraph1.addBottomElement(dynamicGraph1MajorXAxisLabel);

    dynamicGraph1MajorYAxisLabel.setScale(1);
    dynamicGraph1MajorYAxisLabel.setInterval(10);
    dynamicGraph1MajorYAxisLabel.setLabelTypedText(touchgfx::TypedText(T___SINGLEUSE_COBC));
    dynamicGraph1MajorYAxisLabel.setColor(touchgfx::Color::getColorFromRGB(20, 151, 197));
    dynamicGraph1.addLeftElement(dynamicGraph1MajorYAxisLabel);

    dynamicGraph1Line1Painter.setColor(touchgfx::Color::getColorFromRGB(20, 151, 197));
    dynamicGraph1Line1.setPainter(dynamicGraph1Line1Painter);
    dynamicGraph1Line1.setLineWidth(2);
    dynamicGraph1.addGraphElement(dynamicGraph1Line1);

    dynamicGraph1.addDataPoint(35.68153f);
    dynamicGraph1.addDataPoint(24.70829f);
    dynamicGraph1.addDataPoint(15.09993f);
    dynamicGraph1.addDataPoint(9.64658f);
    dynamicGraph1.addDataPoint(10.29607f);
    dynamicGraph1.addDataPoint(17.65263f);
    dynamicGraph1.addDataPoint(30.7985f);
    dynamicGraph1.addDataPoint(47.48347f);
    dynamicGraph1.addDataPoint(64.63712f);
    dynamicGraph1.addDataPoint(79.08018f);
    dynamicGraph1.addDataPoint(88.26222f);
    dynamicGraph1.addDataPoint(90.84678f);
    dynamicGraph1.addDataPoint(87.00225f);
    dynamicGraph1.addDataPoint(78.32869f);
    dynamicGraph1.addDataPoint(67.43983f);
    dynamicGraph1.addDataPoint(57.30358f);
    dynamicGraph1.addDataPoint(50.50336f);
    dynamicGraph1.addDataPoint(48.60152f);
    dynamicGraph1.addDataPoint(51.76094f);
    dynamicGraph1.addDataPoint(58.71717f);
    dynamicGraph1.addDataPoint(67.10764f);
    dynamicGraph1.addDataPoint(74.07635f);
    dynamicGraph1.addDataPoint(77.0051f);
    dynamicGraph1.addDataPoint(74.19086f);
    dynamicGraph1.addDataPoint(65.30205f);
    dynamicGraph1.addDataPoint(51.50043f);
    dynamicGraph1.addDataPoint(35.19704f);
    dynamicGraph1.addDataPoint(19.50059f);
    dynamicGraph1.addDataPoint(7.49143f);
    dynamicGraph1.addDataPoint(1.49786f);
    dynamicGraph1.addDataPoint(2.55044f);
    dynamicGraph1.addDataPoint(10.1471f);
    dynamicGraph1.addDataPoint(22.38581f);
    dynamicGraph1.addDataPoint(36.43192f);
    dynamicGraph1.addDataPoint(49.20576f);
    dynamicGraph1.addDataPoint(58.12232f);
    dynamicGraph1.addDataPoint(61.70249f);
    dynamicGraph1.addDataPoint(59.90719f);
    dynamicGraph1.addDataPoint(54.11349f);
    dynamicGraph1.addDataPoint(46.74014f);
    dynamicGraph1.addDataPoint(40.61545f);
    dynamicGraph1.addDataPoint(38.24404f);
    dynamicGraph1.addDataPoint(41.15361f);
    dynamicGraph1.addDataPoint(49.48305f);
    dynamicGraph1.addDataPoint(61.91458f);
    dynamicGraph1.addDataPoint(75.96761f);
    dynamicGraph1.addDataPoint(88.58356f);
    dynamicGraph1.addDataPoint(96.85958f);
    dynamicGraph1.addDataPoint(98.75177f);
    dynamicGraph1.addDataPoint(93.57632f);
    dynamicGraph1.addDataPoint(82.18576f);
    dynamicGraph1.addDataPoint(66.77673f);
    dynamicGraph1.addDataPoint(50.37575f);
    dynamicGraph1.addDataPoint(36.12803f);
    dynamicGraph1.addDataPoint(26.56205f);
    dynamicGraph1.addDataPoint(23.0088f);
    dynamicGraph1.addDataPoint(25.31622f);
    dynamicGraph1.addDataPoint(31.92714f);
    dynamicGraph1.addDataPoint(40.30014f);
    dynamicGraph1.addDataPoint(47.5685f);
    dynamicGraph1.addDataPoint(51.2747f);
    dynamicGraph1.addDataPoint(49.9991f);
    dynamicGraph1.addDataPoint(43.72795f);
    dynamicGraph1.addDataPoint(33.86973f);
    dynamicGraph1.addDataPoint(22.9154f);
    dynamicGraph1.addDataPoint(13.82543f);
    dynamicGraph1.addDataPoint(9.29388f);
    dynamicGraph1.addDataPoint(11.07008f);
    dynamicGraph1.addDataPoint(19.50489f);
    dynamicGraph1.addDataPoint(33.43342f);
    dynamicGraph1.addDataPoint(50.42438f);
    dynamicGraph1.addDataPoint(67.33629f);
    dynamicGraph1.addDataPoint(81.04604f);
    dynamicGraph1.addDataPoint(89.17295f);
    dynamicGraph1.addDataPoint(90.62279f);
    dynamicGraph1.addDataPoint(85.8199f);
    dynamicGraph1.addDataPoint(76.57229f);
    dynamicGraph1.addDataPoint(65.60376f);
    dynamicGraph1.addDataPoint(55.8687f);
    dynamicGraph1.addDataPoint(49.818f);
    dynamicGraph1.addDataPoint(48.79635f);
    dynamicGraph1.addDataPoint(52.71842f);
    dynamicGraph1.addDataPoint(60.10315f);
    dynamicGraph1.addDataPoint(68.45712f);
    dynamicGraph1.addDataPoint(74.91234f);
    dynamicGraph1.addDataPoint(76.96127f);
    dynamicGraph1.addDataPoint(73.10765f);
    dynamicGraph1.addDataPoint(63.27254f);
    dynamicGraph1.addDataPoint(48.8544f);
    dynamicGraph1.addDataPoint(32.42691f);
    dynamicGraph1.addDataPoint(17.14703f);
    dynamicGraph1.addDataPoint(6.01649f);
    dynamicGraph1.addDataPoint(1.17639f);
    dynamicGraph1.addDataPoint(3.40623f);
    dynamicGraph1.addDataPoint(11.94925f);
    dynamicGraph1.addDataPoint(24.70611f);
    dynamicGraph1.addDataPoint(38.74918f);
    dynamicGraph1.addDataPoint(51.03154f);
    dynamicGraph1.addDataPoint(59.11737f);
    dynamicGraph1.addDataPoint(61.75553f);

    textArea1.setXY(134, 0);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_AELC));

    add(__background);
    add(box1);
    add(dynamicGraph1);
    add(textArea1);
}

void Screen2ViewBase::setupScreen()
{

}

void Screen2ViewBase::graphClickedCallbackHandler(const touchgfx::AbstractDataGraph& src, const touchgfx::AbstractDataGraph::GraphClickEvent& value)
{
    if (&src == &dynamicGraph1)
    {
        //Interaction1
        //When dynamicGraph1 clicked change screen to Screen3
        //Go to Screen3 with screen transition towards East
        application().gotoScreen3ScreenSlideTransitionEast();
    }
}
