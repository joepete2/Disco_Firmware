/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen3_screen/Screen3ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/canvas_widget_renderer/CanvasWidgetRenderer.hpp>


Screen3ViewBase::Screen3ViewBase() :
    graphClickedCallback(this, &Screen3ViewBase::graphClickedCallbackHandler)
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
    dynamicGraph1MajorXAxisLabel.setLabelTypedText(touchgfx::TypedText(T___SINGLEUSE_8R4D));
    dynamicGraph1MajorXAxisLabel.setColor(touchgfx::Color::getColorFromRGB(20, 151, 197));
    dynamicGraph1.addBottomElement(dynamicGraph1MajorXAxisLabel);

    dynamicGraph1MajorYAxisLabel.setScale(1);
    dynamicGraph1MajorYAxisLabel.setInterval(10);
    dynamicGraph1MajorYAxisLabel.setLabelTypedText(touchgfx::TypedText(T___SINGLEUSE_9Z5V));
    dynamicGraph1MajorYAxisLabel.setColor(touchgfx::Color::getColorFromRGB(20, 151, 197));
    dynamicGraph1.addLeftElement(dynamicGraph1MajorYAxisLabel);

    dynamicGraph1Line1Painter.setColor(touchgfx::Color::getColorFromRGB(20, 151, 197));
    dynamicGraph1Line1.setPainter(dynamicGraph1Line1Painter);
    dynamicGraph1Line1.setLineWidth(2);
    dynamicGraph1.addGraphElement(dynamicGraph1Line1);

    dynamicGraph1.addDataPoint(23.17634f);
    dynamicGraph1.addDataPoint(24.56147f);
    dynamicGraph1.addDataPoint(30.59988f);
    dynamicGraph1.addDataPoint(38.87581f);
    dynamicGraph1.addDataPoint(46.52582f);
    dynamicGraph1.addDataPoint(50.97328f);
    dynamicGraph1.addDataPoint(50.58721f);
    dynamicGraph1.addDataPoint(45.10327f);
    dynamicGraph1.addDataPoint(35.70275f);
    dynamicGraph1.addDataPoint(24.72979f);
    dynamicGraph1.addDataPoint(15.11577f);
    dynamicGraph1.addDataPoint(9.65183f);
    dynamicGraph1.addDataPoint(10.28806f);
    dynamicGraph1.addDataPoint(17.63166f);
    dynamicGraph1.addDataPoint(30.76787f);
    dynamicGraph1.addDataPoint(47.44867f);
    dynamicGraph1.addDataPoint(64.60464f);
    dynamicGraph1.addDataPoint(79.05596f);
    dynamicGraph1.addDataPoint(88.25028f);
    dynamicGraph1.addDataPoint(90.84833f);
    dynamicGraph1.addDataPoint(87.01545f);
    dynamicGraph1.addDataPoint(78.34915f);
    dynamicGraph1.addDataPoint(67.46175f);
    dynamicGraph1.addDataPoint(57.32118f);
    dynamicGraph1.addDataPoint(50.51234f);
    dynamicGraph1.addDataPoint(48.60009f);
    dynamicGraph1.addDataPoint(51.75023f);
    dynamicGraph1.addDataPoint(58.70097f);
    dynamicGraph1.addDataPoint(67.09138f);
    dynamicGraph1.addDataPoint(74.06573f);
    dynamicGraph1.addDataPoint(77.00461f);
    dynamicGraph1.addDataPoint(74.20264f);
    dynamicGraph1.addDataPoint(65.32527f);
    dynamicGraph1.addDataPoint(51.53137f);
    dynamicGraph1.addDataPoint(35.23f);
    dynamicGraph1.addDataPoint(19.52914f);
    dynamicGraph1.addDataPoint(7.50996f);
    dynamicGraph1.addDataPoint(1.50289f);
    dynamicGraph1.addDataPoint(2.54142f);
    dynamicGraph1.addDataPoint(10.12653f);
    dynamicGraph1.addDataPoint(22.3586f);
    dynamicGraph1.addDataPoint(36.40421f);
    dynamicGraph1.addDataPoint(49.18344f);
    dynamicGraph1.addDataPoint(58.1096f);
    dynamicGraph1.addDataPoint(61.70094f);
    dynamicGraph1.addDataPoint(59.9154f);
    dynamicGraph1.addDataPoint(54.12752f);
    dynamicGraph1.addDataPoint(46.75452f);
    dynamicGraph1.addDataPoint(40.62462f);
    dynamicGraph1.addDataPoint(38.24381f);
    dynamicGraph1.addDataPoint(41.14222f);
    dynamicGraph1.addDataPoint(49.46171f);
    dynamicGraph1.addDataPoint(61.88724f);
    dynamicGraph1.addDataPoint(75.94f);
    dynamicGraph1.addDataPoint(88.56188f);
    dynamicGraph1.addDataPoint(96.84896f);
    dynamicGraph1.addDataPoint(98.75505f);
    dynamicGraph1.addDataPoint(93.59334f);
    dynamicGraph1.addDataPoint(82.21336f);
    dynamicGraph1.addDataPoint(66.80949f);
    dynamicGraph1.addDataPoint(50.40728f);
    dynamicGraph1.addDataPoint(36.15243f);
    dynamicGraph1.addDataPoint(26.57533f);
    dynamicGraph1.addDataPoint(23.00975f);
    dynamicGraph1.addDataPoint(25.30662f);
    dynamicGraph1.addDataPoint(31.91127f);
    dynamicGraph1.addDataPoint(40.28362f);
    dynamicGraph1.addDataPoint(47.55688f);
    dynamicGraph1.addDataPoint(51.27202f);
    dynamicGraph1.addDataPoint(50.00686f);
    dynamicGraph1.addDataPoint(43.74469f);
    dynamicGraph1.addDataPoint(33.89141f);
    dynamicGraph1.addDataPoint(22.93636f);
    dynamicGraph1.addDataPoint(13.83979f);
    dynamicGraph1.addDataPoint(9.297f);
    dynamicGraph1.addDataPoint(11.05978f);
    dynamicGraph1.addDataPoint(19.482f);
    dynamicGraph1.addDataPoint(33.40166f);
    dynamicGraph1.addDataPoint(50.38952f);
    dynamicGraph1.addDataPoint(67.30482f);
    dynamicGraph1.addDataPoint(81.02367f);
    dynamicGraph1.addDataPoint(89.16329f);
    dynamicGraph1.addDataPoint(90.62651f);
    dynamicGraph1.addDataPoint(85.83468f);
    dynamicGraph1.addDataPoint(76.59341f);
    dynamicGraph1.addDataPoint(65.62533f);
    dynamicGraph1.addDataPoint(55.88509f);
    dynamicGraph1.addDataPoint(49.82528f);
    dynamicGraph1.addDataPoint(48.7932f);
    dynamicGraph1.addDataPoint(52.70647f);
    dynamicGraph1.addDataPoint(60.08654f);
    dynamicGraph1.addDataPoint(68.44142f);
    dynamicGraph1.addDataPoint(74.90316f);
    dynamicGraph1.addDataPoint(76.96278f);
    dynamicGraph1.addDataPoint(73.1215f);
    dynamicGraph1.addDataPoint(63.29738f);
    dynamicGraph1.addDataPoint(48.88612f);
    dynamicGraph1.addDataPoint(32.45957f);
    dynamicGraph1.addDataPoint(17.17424f);
    dynamicGraph1.addDataPoint(6.03292f);

    textArea1.setXY(113, 0);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_9XDK));

    add(__background);
    add(box1);
    add(dynamicGraph1);
    add(textArea1);
}

void Screen3ViewBase::setupScreen()
{

}

void Screen3ViewBase::graphClickedCallbackHandler(const touchgfx::AbstractDataGraph& src, const touchgfx::AbstractDataGraph::GraphClickEvent& value)
{
    if (&src == &dynamicGraph1)
    {
        //Interaction1
        //When dynamicGraph1 clicked change screen to Screen2
        //Go to Screen2 with screen transition towards West
        application().gotoScreen2ScreenSlideTransitionWest();
    }
}
