
module Icon {

}

module Button = {
  [@bs.module "@material/react-button"] [@react.component]
  external make:
    (~className: string=?, ~raised: bool=?, ~unelevated:bool=?, ~outlined: bool=?, ~dense: bool=?, ~disabled:bool=?, ~children: React.element=?) =>
    React.element =
    "default";
};

